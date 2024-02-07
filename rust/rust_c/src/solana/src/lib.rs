#![no_std]

extern crate alloc;

use crate::structs::{DisplaySolanaMessage, DisplaySolanaTx};
use alloc::format;
use alloc::string::{String, ToString};
use app_solana::errors::SolanaError;
use app_solana::parse_message;
use common_rust_c::errors::RustCError;
use common_rust_c::extract_ptr_with_type;
use common_rust_c::structs::{SimpleResponse, TransactionCheckResult, TransactionParseResult};
use common_rust_c::types::{PtrBytes, PtrString, PtrT, PtrUR};
use common_rust_c::ur::{UREncodeResult, FRAGMENT_MAX_LENGTH_DEFAULT};
use common_rust_c::utils::{convert_c_char, recover_c_char};
use cty::c_char;
use third_party::ur_registry::solana::sol_sign_request::SolSignRequest;
use third_party::ur_registry::solana::sol_signature::SolSignature;
use third_party::ur_registry::traits::RegistryItem;

pub mod structs;

fn build_sign_result(ptr: PtrUR, seed: &[u8]) -> Result<SolSignature, SolanaError> {
    let sign_request = extract_ptr_with_type!(ptr, SolSignRequest);
    let mut path =
        sign_request
            .get_derivation_path()
            .get_path()
            .ok_or(SolanaError::InvalidData(
                "invalid derivation path".to_string(),
            ))?;
    if !path.starts_with("m/") {
        path = format!("m/{}", path);
    }
    let signature = app_solana::sign(sign_request.get_sign_data().to_vec(), &path, seed)?;
    Ok(SolSignature::new(
        sign_request.get_request_id(),
        signature.to_vec(),
    ))
}

#[no_mangle]
pub extern "C" fn solana_get_address(pubkey: PtrString) -> *mut SimpleResponse<c_char> {
    let x_pub = recover_c_char(pubkey);
    let address = app_solana::get_address(&x_pub);
    match address {
        Ok(result) => SimpleResponse::success(convert_c_char(result) as *mut c_char).simple_c_ptr(),
        Err(e) => SimpleResponse::from(e).simple_c_ptr(),
    }
}

#[no_mangle]
pub extern "C" fn solana_check(
    ptr: PtrUR,
    master_fingerprint: PtrBytes,
    length: u32,
) -> PtrT<TransactionCheckResult> {
    if length != 4 {
        return TransactionCheckResult::from(RustCError::InvalidMasterFingerprint).c_ptr();
    }
    let sol_sign_request = extract_ptr_with_type!(ptr, SolSignRequest);
    let mfp = unsafe { core::slice::from_raw_parts(master_fingerprint, 4) };
    if let Some(mfp) = (mfp.try_into() as Result<[u8; 4], _>).ok() {
        let derivation_path: third_party::ur_registry::crypto_key_path::CryptoKeyPath =
            sol_sign_request.get_derivation_path();
        if let Some(ur_mfp) = derivation_path.get_source_fingerprint() {
            return if mfp == ur_mfp {
                TransactionCheckResult::new().c_ptr()
            } else {
                TransactionCheckResult::from(RustCError::MasterFingerprintMismatch).c_ptr()
            };
        }
        return TransactionCheckResult::from(RustCError::MasterFingerprintMismatch).c_ptr();
    };
    TransactionCheckResult::from(RustCError::InvalidMasterFingerprint).c_ptr()
}

#[no_mangle]
pub extern "C" fn solana_parse_tx(ptr: PtrUR) -> PtrT<TransactionParseResult<DisplaySolanaTx>> {
    let solan_sign_reqeust = extract_ptr_with_type!(ptr, SolSignRequest);
    let tx_hex = solan_sign_reqeust.get_sign_data();
    match app_solana::parse(&tx_hex.to_vec()) {
        Ok(v) => TransactionParseResult::success(DisplaySolanaTx::from(v).c_ptr()).c_ptr(),
        Err(e) => TransactionParseResult::from(e).c_ptr(),
    }
}

#[no_mangle]
pub extern "C" fn solana_sign_tx(
    ptr: PtrUR,
    seed: PtrBytes,
    seed_len: u32,
) -> PtrT<UREncodeResult> {
    let seed = unsafe { alloc::slice::from_raw_parts(seed, seed_len as usize) };
    build_sign_result(ptr, seed)
        .map(|v| v.try_into())
        .map_or_else(
            |e| UREncodeResult::from(e).c_ptr(),
            |v| {
                v.map_or_else(
                    |e| UREncodeResult::from(e).c_ptr(),
                    |data| {
                        UREncodeResult::encode(
                            data,
                            SolSignature::get_registry_type().get_type(),
                            FRAGMENT_MAX_LENGTH_DEFAULT.clone(),
                        )
                        .c_ptr()
                    },
                )
            },
        )
}

#[no_mangle]
pub extern "C" fn solana_parse_message(
    ptr: PtrUR,
    pubkey: PtrString,
) -> PtrT<TransactionParseResult<DisplaySolanaMessage>> {
    let sol_sign_request = extract_ptr_with_type!(ptr, SolSignRequest);
    let pubkey = recover_c_char(pubkey);
    if app_solana::validate_tx(&mut sol_sign_request.get_sign_data()) {
        return TransactionParseResult::from(RustCError::UnsupportedTransaction(
            "Transaction".to_string(),
        ))
        .c_ptr();
    }
    match parse_message(sol_sign_request.get_sign_data(), &pubkey.to_string()) {
        Ok(t) => TransactionParseResult::success(DisplaySolanaMessage::from(t).c_ptr()).c_ptr(),
        Err(e) => TransactionParseResult::from(e).c_ptr(),
    }
}

#[no_mangle]
pub extern "C" fn sol_get_path(ptr: PtrUR) -> PtrString {
    let sol_sign_request = extract_ptr_with_type!(ptr, SolSignRequest);
    let derivation_path = sol_sign_request.get_derivation_path();
    if let Some(path) = derivation_path.get_path() {
        return convert_c_char(path);
    }
    return convert_c_char("".to_string());
}

#[no_mangle]
pub extern "C" fn solana_parse_program(program_account: PtrString, program_data: PtrString, instruction: PtrString, types: PtrString) -> *mut SimpleResponse<c_char> {
    let program_account = recover_c_char(program_account);
    let program_data = recover_c_char(program_data);
    let instruction = recover_c_char(instruction);
    let types = recover_c_char(types);
    match app_solana::parse_program_anchor(&program_account, &program_data, &instruction, &types) {
        Ok(v) => SimpleResponse::success(convert_c_char(v) as *mut c_char).simple_c_ptr(),
        Err(e) => SimpleResponse::from(e).simple_c_ptr(),
    }
}

#[no_mangle]
pub extern "C" fn solana_get_instruction_index(program_data: PtrString) -> *mut SimpleResponse<c_char> {
    let program_data = recover_c_char(program_data);
    match app_solana::get_instruction_index(&program_data) {
        Ok(v) => SimpleResponse::success(convert_c_char(v) as *mut c_char).simple_c_ptr(),
        Err(e) => SimpleResponse::from(e).simple_c_ptr(),
    }
}

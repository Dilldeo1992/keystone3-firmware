mod structs;

use alloc::boxed::Box;
use alloc::string::ToString;
use alloc::vec::Vec;
use alloc::{format, slice, vec};
use app_bitcoin::errors::BitcoinError;
use app_bitcoin::multi_sig::wallet::{
    export_wallet_by_ur, generate_config_data, parse_wallet_config, MultiSigWalletConfig,
};
use app_bitcoin::multi_sig::{export_xpub_by_crypto_account, Network};
use core::str::FromStr;
use third_party::hex;
use third_party::serde_json::Value::String;
use third_party::ur_registry::bytes::Bytes;

use common_rust_c::errors::RustCError;
use common_rust_c::ffi::{CSliceFFI, VecFFI};
use common_rust_c::free::Free;
use common_rust_c::structs::{ExtendedPublicKey, Response};
use common_rust_c::types::{Ptr, PtrBytes, PtrString, PtrT, PtrUR};
use common_rust_c::ur::{UREncodeResult, FRAGMENT_MAX_LENGTH_DEFAULT};
use common_rust_c::utils::{convert_c_char, recover_c_array, recover_c_char};

use crate::multi_sig::structs::{MultiSigWallet, NetworkType};
use common_rust_c::extract_ptr_with_type;
use third_party::ur_registry::crypto_account::CryptoAccount;
use third_party::ur_registry::error::URError;
use third_party::ur_registry::traits::RegistryItem;

#[no_mangle]
pub extern "C" fn export_multi_sig_xpub_by_ur(
    master_fingerprint: *mut u8,
    length: u32,
    public_keys: PtrT<CSliceFFI<ExtendedPublicKey>>,
    network: NetworkType,
) -> *mut UREncodeResult {
    if length != 4 {
        return UREncodeResult::from(URError::UrEncodeError(format!(
            "master fingerprint length must be 4, current is {}",
            length
        )))
        .c_ptr();
    }
    unsafe {
        let mfp = slice::from_raw_parts(master_fingerprint, length as usize);
        let keys = recover_c_array(public_keys);

        let mut extended_public_keys = vec![];
        let mut extend_public_key_paths = vec![];
        for key in keys {
            extended_public_keys.push(recover_c_char(key.xpub));
            extend_public_key_paths.push(recover_c_char(key.path));
        }

        let mfp = match <&[u8; 4]>::try_from(mfp) {
            Ok(mfp) => mfp,
            Err(e) => {
                return UREncodeResult::from(URError::UrEncodeError(e.to_string())).c_ptr();
            }
        };

        let extended_public_keys = extended_public_keys
            .iter()
            .map(|x| x.trim())
            .collect::<Vec<_>>();

        let extend_public_key_paths = extend_public_key_paths
            .iter()
            .map(|x| x.trim())
            .collect::<Vec<_>>();

        let result = export_xpub_by_crypto_account(
            mfp,
            extended_public_keys.as_slice(),
            extend_public_key_paths.as_slice(),
            network.into(),
        );

        match result.map(|v| v.try_into()) {
            Ok(v) => match v {
                Ok(data) => UREncodeResult::encode(
                    data,
                    CryptoAccount::get_registry_type().get_type(),
                    FRAGMENT_MAX_LENGTH_DEFAULT.clone(),
                )
                .c_ptr(),
                Err(e) => UREncodeResult::from(e).c_ptr(),
            },
            Err(e) => UREncodeResult::from(e).c_ptr(),
        }
    }
}

#[no_mangle]
pub extern "C" fn export_multi_sig_wallet_by_ur_test(
    master_fingerprint: *mut u8,
    length: u32,
    multi_sig_wallet: PtrT<MultiSigWallet>,
    network: NetworkType,
) -> *mut UREncodeResult {
    if length != 4 {
        return UREncodeResult::from(URError::UrEncodeError(format!(
            "master fingerprint length must be 4, current is {}",
            length
        )))
        .c_ptr();
    }
    unsafe {
        let master_fingerprint = slice::from_raw_parts(master_fingerprint, length as usize);
        let master_fingerprint = match third_party::bitcoin::bip32::Fingerprint::from_str(
            hex::encode(master_fingerprint.to_vec()).as_str(),
        )
        .map_err(|_e| RustCError::InvalidMasterFingerprint)
        {
            Ok(mfp) => mfp,
            Err(e) => {
                return UREncodeResult::from(e).c_ptr();
            }
        };

        let multi_sig_wallet = extract_ptr_with_type!(multi_sig_wallet, MultiSigWallet);

        let result = export_wallet_by_ur(
            &multi_sig_wallet.into(),
            &master_fingerprint.to_string(),
            (&network).into(),
        );

        result.map_or_else(
            |e| UREncodeResult::from(e).c_ptr(),
            |data| {
                data.try_into().map_or_else(
                    |e| UREncodeResult::from(e).c_ptr(),
                    |data| {
                        UREncodeResult::encode(
                            data,
                            Bytes::get_registry_type().get_type(),
                            FRAGMENT_MAX_LENGTH_DEFAULT.clone(),
                        )
                        .c_ptr()
                    },
                )
            },
        )
    }
}

#[no_mangle]
pub extern "C" fn export_multi_sig_wallet_by_ur(
    master_fingerprint: *mut u8,
    length: u32,
    config: PtrString,
    network: NetworkType,
) -> *mut UREncodeResult {
    if length != 4 {
        return UREncodeResult::from(URError::UrEncodeError(format!(
            "master fingerprint length must be 4, current is {}",
            length
        )))
        .c_ptr();
    }
    unsafe {
        let master_fingerprint = slice::from_raw_parts(master_fingerprint, length as usize);
        let master_fingerprint = match third_party::bitcoin::bip32::Fingerprint::from_str(
            hex::encode(master_fingerprint.to_vec()).as_str(),
        )
        .map_err(|_e| RustCError::InvalidMasterFingerprint)
        {
            Ok(mfp) => mfp,
            Err(e) => {
                return UREncodeResult::from(e).c_ptr();
            }
        };
        // let xfp = hex::encode(xfp);
        let config = recover_c_char(config);
        let multi_sig_wallet = match parse_wallet_config(
            config.as_str(),
            &master_fingerprint.to_string(),
            (&network).into(),
        ) {
            Ok(wallet) => wallet,
            Err(e) => return UREncodeResult::from(e).c_ptr(),
        };

        let result = export_wallet_by_ur(
            &multi_sig_wallet,
            &master_fingerprint.to_string(),
            (&network).into(),
        );

        result.map_or_else(
            |e| UREncodeResult::from(e).c_ptr(),
            |data| {
                data.try_into().map_or_else(
                    |e| UREncodeResult::from(e).c_ptr(),
                    |data| {
                        UREncodeResult::encode(
                            data,
                            Bytes::get_registry_type().get_type(),
                            FRAGMENT_MAX_LENGTH_DEFAULT.clone(),
                        )
                        .c_ptr()
                    },
                )
            },
        )
    }
}

#[no_mangle]
pub extern "C" fn import_multi_sig_wallet_by_ur(
    ur: PtrUR,
    master_fingerprint: PtrBytes,
    master_fingerprint_len: u32,
    network: NetworkType,
) -> Ptr<Response<MultiSigWallet>> {
    if master_fingerprint_len != 4 {
        return Response::from(RustCError::InvalidMasterFingerprint).c_ptr();
    }
    let master_fingerprint = unsafe { core::slice::from_raw_parts(master_fingerprint, 4) };
    let master_fingerprint = match third_party::bitcoin::bip32::Fingerprint::from_str(
        hex::encode(master_fingerprint.to_vec()).as_str(),
    )
    .map_err(|_e| RustCError::InvalidMasterFingerprint)
    {
        Ok(mfp) => mfp,
        Err(e) => {
            return Response::from(e).c_ptr();
        }
    };

    let bytes = extract_ptr_with_type!(ur, Bytes);

    let result = app_bitcoin::multi_sig::wallet::import_wallet_by_ur(
        bytes,
        &master_fingerprint.to_string(),
        network.into(),
    );

    match result {
        Ok(wallet) => Response::success_ptr(MultiSigWallet::from(wallet).c_ptr()).c_ptr(),
        Err(e) => Response::from(e).c_ptr(),
    }
}

#[no_mangle]
pub extern "C" fn import_multi_sig_wallet_by_file(
    content: PtrString,
    master_fingerprint: PtrBytes,
    master_fingerprint_len: u32,
    network: NetworkType,
) -> Ptr<Response<MultiSigWallet>> {
    if master_fingerprint_len != 4 {
        return Response::from(RustCError::InvalidMasterFingerprint).c_ptr();
    }
    let master_fingerprint = unsafe { core::slice::from_raw_parts(master_fingerprint, 4) };
    let master_fingerprint = match third_party::bitcoin::bip32::Fingerprint::from_str(
        hex::encode(master_fingerprint.to_vec()).as_str(),
    )
    .map_err(|_e| RustCError::InvalidMasterFingerprint)
    {
        Ok(mfp) => mfp,
        Err(e) => {
            return Response::from(e).c_ptr();
        }
    };

    let content = recover_c_char(content);

    let result = parse_wallet_config(&content, &master_fingerprint.to_string(), network.into());

    match result {
        Ok(wallet) => Response::success_ptr(MultiSigWallet::from(wallet).c_ptr()).c_ptr(),
        Err(e) => Response::from(e).c_ptr(),
    }
}

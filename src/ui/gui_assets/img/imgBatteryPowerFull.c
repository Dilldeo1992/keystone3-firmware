#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL
#define LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL uint8_t imgBatteryPowerFull_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
    0x3d, 0xed, 0xfe, 0x46, 0x0d, 0xfe, 0x46, 0x0d, 0xfe, 0x4e, 0x2e, 0xff, 0x56, 0x4e, 0xff, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x6e, 0xd1, 0xff, 0x6e, 0xd1, 0xfe, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xff, 0x7f, 0x33, 0xff, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xff, 0x97, 0xb5, 0xfe, 0x9f, 0xb5, 0xff,
    0x3d, 0xcd, 0xff, 0x45, 0xed, 0xfe, 0x46, 0x0e, 0xfe, 0x4e, 0x2e, 0xfe, 0x4e, 0x4e, 0xfe, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xff, 0x6e, 0xd1, 0xff, 0x6e, 0xd1, 0xff, 0x76, 0xf2, 0xfe, 0x77, 0x12, 0xfe, 0x7f, 0x32, 0xfe, 0x87, 0x33, 0xff, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xfe, 0x97, 0x95, 0xff, 0x9f, 0xb5, 0xfe,
    0x3d, 0xed, 0xff, 0x45, 0xed, 0xff, 0x46, 0x0d, 0xfe, 0x4e, 0x2e, 0xff, 0x4e, 0x4e, 0xfe, 0x56, 0x6f, 0xff, 0x5e, 0x6f, 0xfe, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x6e, 0xd1, 0xff, 0x6e, 0xd1, 0xff, 0x76, 0xf2, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xff, 0x87, 0x33, 0xff, 0x87, 0x53, 0xfe, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xfe, 0x97, 0xb5, 0xfe, 0x9f, 0xb5, 0xfe,
    0x3d, 0xed, 0xfe, 0x45, 0xed, 0xfe, 0x46, 0x0e, 0xff, 0x4e, 0x2e, 0xfe, 0x56, 0x4e, 0xff, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xfe, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xff, 0x66, 0xd1, 0xfe, 0x6e, 0xd1, 0xff, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xfe, 0x87, 0x33, 0xff, 0x87, 0x53, 0xfe, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xff, 0x97, 0xb5, 0xff, 0x9f, 0xb5, 0xff,
    0x3d, 0xed, 0xff, 0x45, 0xed, 0xff, 0x46, 0x0e, 0xff, 0x4e, 0x2e, 0xff, 0x56, 0x4e, 0xff, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xff, 0x6e, 0xd1, 0xff, 0x6e, 0xd1, 0xfe, 0x76, 0xf2, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xff, 0x87, 0x33, 0xff, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xfe, 0x8f, 0x94, 0xfe, 0x97, 0xb5, 0xfe, 0x9f, 0xb5, 0xff,
    0x3d, 0xed, 0xff, 0x46, 0x0d, 0xfe, 0x46, 0x0e, 0xff, 0x4e, 0x2e, 0xff, 0x56, 0x4e, 0xfe, 0x56, 0x6f, 0xfe, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x66, 0xd1, 0xfe, 0x6e, 0xd1, 0xff, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xfe, 0x7f, 0x33, 0xfe, 0x87, 0x53, 0xfe, 0x8f, 0x74, 0xfe, 0x8f, 0x94, 0xff, 0x97, 0x95, 0xff, 0x9f, 0xb5, 0xff,
    0x3d, 0xed, 0xfe, 0x45, 0xed, 0xff, 0x46, 0x0e, 0xff, 0x4e, 0x2e, 0xff, 0x4e, 0x4e, 0xfe, 0x56, 0x6f, 0xff, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x6e, 0xd1, 0xff, 0x6e, 0xd1, 0xfe, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x32, 0xff, 0x7f, 0x33, 0xff, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xfe, 0x97, 0x95, 0xff, 0x9f, 0xb5, 0xff,
    0x3d, 0xed, 0xff, 0x45, 0xed, 0xff, 0x46, 0x0e, 0xfe, 0x4e, 0x2e, 0xff, 0x56, 0x4e, 0xff, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xff, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x66, 0xb1, 0xff, 0x6e, 0xd1, 0xff, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xfe, 0x7f, 0x32, 0xff, 0x7f, 0x33, 0xfe, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xfe, 0x8f, 0x94, 0xfe, 0x97, 0xb5, 0xfe, 0x97, 0xb5, 0xff,
    0x3d, 0xed, 0xfe, 0x45, 0xed, 0xff, 0x46, 0x0e, 0xfe, 0x4e, 0x2e, 0xfe, 0x56, 0x4e, 0xff, 0x56, 0x4f, 0xff, 0x5e, 0x6f, 0xfe, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xff, 0x66, 0xd1, 0xfe, 0x6e, 0xd1, 0xff, 0x76, 0xf1, 0xff, 0x77, 0x12, 0xff, 0x7f, 0x12, 0xff, 0x87, 0x33, 0xff, 0x87, 0x53, 0xff, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xff, 0x97, 0x95, 0xff, 0x97, 0xb5, 0xff,
    0x3d, 0xed, 0xff, 0x45, 0xed, 0xff, 0x46, 0x0e, 0xff, 0x4e, 0x2e, 0xff, 0x56, 0x4e, 0xff, 0x56, 0x6f, 0xfe, 0x5e, 0x6f, 0xfe, 0x5e, 0x90, 0xff, 0x66, 0xb0, 0xfe, 0x66, 0xd1, 0xff, 0x6e, 0xd1, 0xfe, 0x76, 0xf2, 0xff, 0x77, 0x12, 0xfe, 0x7f, 0x32, 0xfe, 0x7f, 0x33, 0xff, 0x87, 0x53, 0xfe, 0x8f, 0x74, 0xff, 0x8f, 0x94, 0xff, 0x97, 0x95, 0xff, 0x9f, 0xb5, 0xff,
#endif
};

const lv_img_dsc_t imgBatteryPowerFull = {
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 20,
    .header.h = 10,
    .data_size = 200 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = imgBatteryPowerFull_map,
};

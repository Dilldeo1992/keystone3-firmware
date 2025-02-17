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

#ifndef LV_ATTRIBUTE_IMG_ELECTION
#define LV_ATTRIBUTE_IMG_ELECTION
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ELECTION uint8_t election_map[] = {
    0x00, 0x00, 0x00, 0x00,   /*Color of index 0*/
    0xff, 0xff, 0xff, 0x03,   /*Color of index 1*/
    0xff, 0xff, 0xff, 0x1e,   /*Color of index 2*/
    0xff, 0xff, 0xff, 0x0e,   /*Color of index 3*/
    0xff, 0xff, 0xff, 0x16,   /*Color of index 4*/
    0xf9, 0xd2, 0xaa, 0x2d,   /*Color of index 5*/
    0xf9, 0xcc, 0xaa, 0x2d,   /*Color of index 6*/
    0xf4, 0xcc, 0xaa, 0x2d,   /*Color of index 7*/
    0xec, 0xc6, 0xa8, 0x2d,   /*Color of index 8*/
    0xe8, 0xc3, 0xa4, 0x2d,   /*Color of index 9*/
    0xf8, 0xbe, 0x7d, 0x3b,   /*Color of index 10*/
    0xf2, 0xba, 0x7d, 0x3b,   /*Color of index 11*/
    0xf2, 0xb6, 0x7d, 0x3b,   /*Color of index 12*/
    0xec, 0xb1, 0x7b, 0x3b,   /*Color of index 13*/
    0xe1, 0xa9, 0x79, 0x3b,   /*Color of index 14*/
    0xdc, 0xa4, 0x79, 0x3b,   /*Color of index 15*/
    0xdc, 0xa3, 0x75, 0x3b,   /*Color of index 16*/
    0xf5, 0xad, 0x62, 0x49,   /*Color of index 17*/
    0xf0, 0xa8, 0x62, 0x49,   /*Color of index 18*/
    0xd5, 0x93, 0x57, 0x49,   /*Color of index 19*/
    0xd5, 0x8f, 0x5b, 0x49,   /*Color of index 20*/
    0xf3, 0xa1, 0x4f, 0x57,   /*Color of index 21*/
    0xed, 0x9b, 0x4f, 0x57,   /*Color of index 22*/
    0xdd, 0x90, 0x49, 0x57,   /*Color of index 23*/
    0xf2, 0x9a, 0x44, 0x65,   /*Color of index 24*/
    0xd0, 0x83, 0x44, 0x57,   /*Color of index 25*/
    0xf4, 0x97, 0x3c, 0x73,   /*Color of index 26*/
    0xd7, 0x81, 0x3a, 0x65,   /*Color of index 27*/
    0xef, 0x91, 0x38, 0x72,   /*Color of index 28*/
    0xec, 0x90, 0x37, 0x73,   /*Color of index 29*/
    0xe7, 0x8c, 0x35, 0x73,   /*Color of index 30*/
    0xef, 0x8e, 0x31, 0x81,   /*Color of index 31*/
    0xd5, 0x7c, 0x2c, 0x73,   /*Color of index 32*/
    0xeb, 0x8c, 0x2f, 0x81,   /*Color of index 33*/
    0xe7, 0x88, 0x2f, 0x81,   /*Color of index 34*/
    0xca, 0x72, 0x2a, 0x73,   /*Color of index 35*/
    0xdf, 0x82, 0x2a, 0x81,   /*Color of index 36*/
    0xdc, 0x7f, 0x2a, 0x81,   /*Color of index 37*/
    0xf3, 0x8f, 0x2c, 0x8f,   /*Color of index 38*/
    0xd5, 0x79, 0x28, 0x81,   /*Color of index 39*/
    0xd5, 0x79, 0x26, 0x81,   /*Color of index 40*/
    0xe8, 0x86, 0x27, 0x8f,   /*Color of index 41*/
    0xe5, 0x83, 0x26, 0x8f,   /*Color of index 42*/
    0xcc, 0x70, 0x23, 0x81,   /*Color of index 43*/
    0xe1, 0x7f, 0x25, 0x8f,   /*Color of index 44*/
    0xc9, 0x6c, 0x22, 0x81,   /*Color of index 45*/
    0xef, 0x8a, 0x25, 0x9d,   /*Color of index 46*/
    0xdb, 0x79, 0x23, 0x8e,   /*Color of index 47*/
    0xd5, 0x75, 0x21, 0x8f,   /*Color of index 48*/
    0xea, 0x84, 0x24, 0x9d,   /*Color of index 49*/
    0xd0, 0x70, 0x1e, 0x8e,   /*Color of index 50*/
    0xe0, 0x7d, 0x20, 0x9d,   /*Color of index 51*/
    0xcb, 0x6b, 0x1d, 0x8f,   /*Color of index 52*/
    0xf2, 0x89, 0x22, 0xab,   /*Color of index 53*/
    0xc7, 0x69, 0x1c, 0x8f,   /*Color of index 54*/
    0xdd, 0x78, 0x1f, 0x9d,   /*Color of index 55*/
    0xc6, 0x67, 0x1c, 0x8f,   /*Color of index 56*/
    0xed, 0x85, 0x21, 0xab,   /*Color of index 57*/
    0xea, 0x83, 0x1f, 0xab,   /*Color of index 58*/
    0xe7, 0x80, 0x1e, 0xab,   /*Color of index 59*/
    0xd0, 0x6d, 0x19, 0x9d,   /*Color of index 60*/
    0xe3, 0x7c, 0x1c, 0xab,   /*Color of index 61*/
    0xf1, 0x87, 0x1e, 0xb9,   /*Color of index 62*/
    0xcb, 0x6a, 0x18, 0x9d,   /*Color of index 63*/
    0xde, 0x79, 0x1b, 0xab,   /*Color of index 64*/
    0xc5, 0x64, 0x16, 0x9c,   /*Color of index 65*/
    0xeb, 0x82, 0x1c, 0xb9,   /*Color of index 66*/
    0xda, 0x74, 0x18, 0xab,   /*Color of index 67*/
    0xd6, 0x72, 0x18, 0xab,   /*Color of index 68*/
    0xd4, 0x70, 0x16, 0xab,   /*Color of index 69*/
    0xe8, 0x7d, 0x1a, 0xb9,   /*Color of index 70*/
    0xe5, 0x7d, 0x1a, 0xb9,   /*Color of index 71*/
    0xf2, 0x86, 0x1b, 0xc7,   /*Color of index 72*/
    0xcc, 0x6a, 0x13, 0xab,   /*Color of index 73*/
    0xed, 0x81, 0x18, 0xc7,   /*Color of index 74*/
    0xe9, 0x7f, 0x18, 0xc7,   /*Color of index 75*/
    0xe7, 0x7c, 0x17, 0xc6,   /*Color of index 76*/
    0xc3, 0x61, 0x11, 0xab,   /*Color of index 77*/
    0xd3, 0x6c, 0x12, 0xb8,   /*Color of index 78*/
    0xf2, 0x85, 0x18, 0xd5,   /*Color of index 79*/
    0xf1, 0x84, 0x17, 0xd5,   /*Color of index 80*/
    0xe1, 0x77, 0x16, 0xc7,   /*Color of index 81*/
    0xcc, 0x67, 0x11, 0xb9,   /*Color of index 82*/
    0xdd, 0x73, 0x13, 0xc7,   /*Color of index 83*/
    0xe9, 0x7e, 0x16, 0xd5,   /*Color of index 84*/
    0xd6, 0x6e, 0x12, 0xc7,   /*Color of index 85*/
    0xc3, 0x5e, 0x0d, 0xb8,   /*Color of index 86*/
    0xf2, 0x83, 0x14, 0xe2,   /*Color of index 87*/
    0xe4, 0x78, 0x13, 0xd5,   /*Color of index 88*/
    0xd1, 0x69, 0x0f, 0xc7,   /*Color of index 89*/
    0xed, 0x7f, 0x14, 0xe2,   /*Color of index 90*/
    0xe9, 0x7c, 0x13, 0xe3,   /*Color of index 91*/
    0xd9, 0x6f, 0x10, 0xd5,   /*Color of index 92*/
    0xe8, 0x7a, 0x12, 0xe3,   /*Color of index 93*/
    0xd5, 0x6d, 0x0e, 0xd5,   /*Color of index 94*/
    0xc2, 0x5c, 0x0a, 0xc6,   /*Color of index 95*/
    0xe2, 0x75, 0x11, 0xe3,   /*Color of index 96*/
    0xeb, 0x7c, 0x11, 0xf0,   /*Color of index 97*/
    0xcb, 0x63, 0x0b, 0xd4,   /*Color of index 98*/
    0xda, 0x6f, 0x0c, 0xe2,   /*Color of index 99*/
    0xe6, 0x78, 0x10, 0xf1,   /*Color of index 100*/
    0xe5, 0x78, 0x0f, 0xf1,   /*Color of index 101*/
    0xe4, 0x76, 0x0f, 0xf0,   /*Color of index 102*/
    0xf0, 0x80, 0x11, 0xff,   /*Color of index 103*/
    0xef, 0x7f, 0x11, 0xff,   /*Color of index 104*/
    0xc5, 0x5d, 0x08, 0xd5,   /*Color of index 105*/
    0xec, 0x7d, 0x10, 0xff,   /*Color of index 106*/
    0xd3, 0x68, 0x0a, 0xe3,   /*Color of index 107*/
    0xc1, 0x5a, 0x07, 0xd4,   /*Color of index 108*/
    0xd0, 0x66, 0x09, 0xe3,   /*Color of index 109*/
    0xe9, 0x7a, 0x0f, 0xfe,   /*Color of index 110*/
    0xda, 0x6e, 0x0b, 0xf1,   /*Color of index 111*/
    0xca, 0x61, 0x08, 0xe2,   /*Color of index 112*/
    0xe3, 0x75, 0x0c, 0xff,   /*Color of index 113*/
    0xd0, 0x66, 0x08, 0xf1,   /*Color of index 114*/
    0xc1, 0x59, 0x04, 0xe2,   /*Color of index 115*/
    0xdc, 0x6f, 0x0a, 0xff,   /*Color of index 116*/
    0xce, 0x63, 0x07, 0xf1,   /*Color of index 117*/
    0xd9, 0x6c, 0x09, 0xfe,   /*Color of index 118*/
    0xd4, 0x68, 0x07, 0xff,   /*Color of index 119*/
    0xd3, 0x67, 0x08, 0xff,   /*Color of index 120*/
    0xc4, 0x5a, 0x03, 0xf1,   /*Color of index 121*/
    0xd0, 0x64, 0x06, 0xfe,   /*Color of index 122*/
    0xc0, 0x56, 0x02, 0xf0,   /*Color of index 123*/
    0xcd, 0x61, 0x05, 0xff,   /*Color of index 124*/
    0xc8, 0x5d, 0x03, 0xff,   /*Color of index 125*/
    0xc2, 0x58, 0x00, 0xff,   /*Color of index 126*/
    0xc0, 0x55, 0x00, 0xfe,   /*Color of index 127*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 128*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 129*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 130*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 131*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 132*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 133*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 134*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 135*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 136*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 137*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 138*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 139*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 140*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 141*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 142*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 143*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 144*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 145*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 146*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 147*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 148*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 149*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 150*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 151*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 152*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 153*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 154*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 155*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 156*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 157*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 158*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 159*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 160*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 161*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 162*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 163*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 164*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 165*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 166*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 167*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 168*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 169*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 170*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 171*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 172*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 173*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 174*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 175*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 176*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 177*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 178*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 179*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 180*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 181*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 182*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 183*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 184*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 185*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 186*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 187*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 188*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 189*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 190*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 191*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 192*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 193*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 194*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 195*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 196*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 197*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 198*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 199*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 200*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 201*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 202*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 203*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 204*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 205*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 206*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 207*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 208*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 209*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 210*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 211*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 212*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 213*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 214*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 215*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 216*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 217*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 218*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 219*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 220*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 221*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 222*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 223*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 224*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 225*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 226*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 227*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 228*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 229*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 230*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 231*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 232*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 233*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 234*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 235*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 236*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 237*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 238*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 239*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 240*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 241*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 242*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 243*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 244*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 245*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 246*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 247*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 248*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 249*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 250*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 251*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 252*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 253*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 254*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 255*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00,
    0x00, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00,
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01,
    0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x38, 0x73, 0x7f, 0x6c, 0x41, 0x10, 0x02, 0x02, 0x02, 0x02, 0x08, 0x38, 0x73, 0x7f, 0x6c, 0x38, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x41, 0x7f, 0x5f, 0x36, 0x5f, 0x7e, 0x7f, 0x38, 0x02, 0x02, 0x38, 0x7b, 0x7f, 0x5f, 0x41, 0x56, 0x7f, 0x41, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x10, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x10, 0x4d, 0x7f, 0x6c, 0x5f, 0x7e, 0x4d, 0x10, 0x02, 0x02, 0x02, 0x41, 0x7e, 0x08, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2d, 0x7e, 0x10, 0x02, 0x02, 0x02, 0x02, 0x02, 0x38, 0x7e, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x7d, 0x27, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3c, 0x79, 0x02, 0x02, 0x02, 0x02, 0x02, 0x10, 0x73, 0x73, 0x73, 0x73, 0x10, 0x02, 0x02, 0x02, 0x02, 0x02, 0x70, 0x43, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x45, 0x70, 0x02, 0x02, 0x02, 0x02, 0x10, 0x73, 0x73, 0x10, 0x10, 0x7b, 0x73, 0x09, 0x02, 0x02, 0x02, 0x02, 0x6b, 0x40, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x43, 0x6d, 0x02, 0x02, 0x09, 0x14, 0x56, 0x7f, 0x56, 0x38, 0x38, 0x56, 0x7f, 0x5f, 0x14, 0x02, 0x02, 0x02, 0x63, 0x3d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2c, 0x7a, 0x41, 0x6c, 0x7f, 0x7f, 0x7e, 0x7f, 0x7e, 0x7f, 0x7f, 0x7f, 0x7e, 0x7f, 0x7f, 0x7f, 0x6c, 0x41, 0x74, 0x29, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x38, 0x7b, 0x7f, 0x7b, 0x5f, 0x56, 0x7f, 0x4d, 0x10, 0x02, 0x02, 0x02, 0x02, 0x10, 0x56, 0x7f, 0x56, 0x5f, 0x79, 0x71, 0x6d, 0x38, 0x10, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2d, 0x7b, 0x7f, 0x69, 0x76, 0x25, 0x02, 0x6c, 0x73, 0x10, 0x02, 0x08, 0x32, 0x3f, 0x02, 0x02, 0x08, 0x7b, 0x5f, 0x02, 0x1e, 0x6e, 0x49, 0x7e, 0x73, 0x23, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x36, 0x7f, 0x5f, 0x19, 0x02, 0x5b, 0x51, 0x23, 0x7e, 0x23, 0x02, 0x1b, 0x3c, 0x62, 0x70, 0x1b, 0x02, 0x02, 0x2b, 0x7f, 0x23, 0x46, 0x5a, 0x02, 0x10, 0x5f, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x23, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x2e, 0x64, 0x73, 0x73, 0x02, 0x02, 0x17, 0x6d, 0x4e, 0x27, 0x72, 0x30, 0x02, 0x02, 0x5f, 0x70, 0x6e, 0x35, 0x02, 0x02, 0x02, 0x36, 0x7f, 0x2d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x6c, 0x69, 0x02, 0x02, 0x02, 0x02, 0x15, 0x74, 0x7f, 0x23, 0x02, 0x02, 0x02, 0x55, 0x2f, 0x08, 0x5e, 0x44, 0x02, 0x02, 0x19, 0x7a, 0x68, 0x11, 0x02, 0x02, 0x02, 0x02, 0x5f, 0x73, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7f, 0x36, 0x02, 0x02, 0x02, 0x02, 0x02, 0x79, 0x79, 0x02, 0x02, 0x02, 0x02, 0x53, 0x76, 0x76, 0x76, 0x37, 0x02, 0x02, 0x02, 0x61, 0x5a, 0x02, 0x02, 0x02, 0x02, 0x02, 0x36, 0x7f, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x69, 0x5f, 0x02, 0x02, 0x02, 0x02, 0x13, 0x7f, 0x74, 0x16, 0x02, 0x02, 0x02, 0x51, 0x2c, 0x02, 0x33, 0x74, 0x0d, 0x02, 0x1c, 0x68, 0x78, 0x19, 0x02, 0x02, 0x02, 0x02, 0x73, 0x6c, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x23, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x4d, 0x7e, 0x5a, 0x4a, 0x02, 0x02, 0x12, 0x58, 0x47, 0x22, 0x58, 0x5d, 0x02, 0x02, 0x5a, 0x57, 0x7b, 0x41, 0x02, 0x02, 0x02, 0x34, 0x7e, 0x23, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x36, 0x7e, 0x62, 0x0e, 0x02, 0x73, 0x56, 0x18, 0x67, 0x21, 0x02, 0x1d, 0x4b, 0x54, 0x5d, 0x31, 0x12, 0x02, 0x1d, 0x67, 0x1a, 0x5f, 0x73, 0x02, 0x17, 0x59, 0x7c, 0x30, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x20, 0x6d, 0x7a, 0x4e, 0x7f, 0x23, 0x02, 0x48, 0x61, 0x05, 0x02, 0x12, 0x1f, 0x39, 0x02, 0x02, 0x0c, 0x5a, 0x4f, 0x02, 0x2b, 0x7d, 0x5c, 0x76, 0x6f, 0x25, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0d, 0x24, 0x6b, 0x7f, 0x76, 0x51, 0x3b, 0x68, 0x42, 0x0c, 0x02, 0x02, 0x02, 0x06, 0x0c, 0x3a, 0x67, 0x42, 0x4c, 0x65, 0x71, 0x64, 0x2a, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x38, 0x7e, 0x31, 0x54, 0x6a, 0x6e, 0x6a, 0x6a, 0x6a, 0x6a, 0x6a, 0x68, 0x6e, 0x6a, 0x67, 0x68, 0x50, 0x2e, 0x7c, 0x36, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4d, 0x73, 0x02, 0x02, 0x02, 0x11, 0x48, 0x68, 0x42, 0x26, 0x26, 0x42, 0x6e, 0x3e, 0x0a, 0x02, 0x02, 0x02, 0x73, 0x4d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4d, 0x73, 0x02, 0x02, 0x02, 0x02, 0x05, 0x57, 0x61, 0x0d, 0x0d, 0x65, 0x5a, 0x05, 0x02, 0x02, 0x02, 0x02, 0x73, 0x4d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4d, 0x7b, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0a, 0x5a, 0x60, 0x60, 0x5d, 0x0b, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7b, 0x41, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2d, 0x7e, 0x10, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2c, 0x76, 0x71, 0x2c, 0x02, 0x02, 0x02, 0x02, 0x02, 0x10, 0x7e, 0x2d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x7f, 0x41, 0x02, 0x02, 0x02, 0x0f, 0x52, 0x78, 0x53, 0x58, 0x74, 0x44, 0x0e, 0x02, 0x02, 0x02, 0x4d, 0x7f, 0x10, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x41, 0x7f, 0x56, 0x41, 0x5f, 0x7e, 0x75, 0x25, 0x02, 0x02, 0x2c, 0x76, 0x7c, 0x5f, 0x41, 0x5f, 0x7f, 0x38, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x38, 0x69, 0x7b, 0x69, 0x34, 0x08, 0x02, 0x02, 0x02, 0x02, 0x0d, 0x30, 0x62, 0x79, 0x73, 0x2d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04,
    0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01,
    0x00, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00,
    0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00,
    0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t election = {
    .header.cf = LV_IMG_CF_INDEXED_8BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 48,
    .header.h = 48,
    .data_size = 3328,
    .data = election_map,
};

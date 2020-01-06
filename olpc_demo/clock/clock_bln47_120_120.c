/**
  * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  */

#include <rtthread.h>
#include "applications/olpc_demo/image_info.h"
#if defined(OLPC_APP_CLOCK_BLN_ENABLE)

static const unsigned char clock_bln47_120_120[784UL] =
{
    0x03, 0x00, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE,
    0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xD8, 0x13, 0x00, 0xF8, 0x27, 0xF0, 0xDF, 0x7F, 0x3F, 0xFD, 0x7E, 0xFF, 0xFE, 0xFD,
    0xF3, 0xBF, 0x7F, 0xFF, 0xBA, 0x7E, 0xFF, 0xFE, 0xED, 0xE7, 0x5F, 0xBE, 0xFF, 0xBF, 0x7F, 0xF4, 0xF9, 0x7F, 0xE7, 0x5F, 0x50, 0x90, 0xF0, 0xEF, 0x5F, 0xBF, 0x7F, 0x05, 0xF9, 0xF2, 0x5F, 0xA3, 0xBF, 0x4F, 0x7F, 0x4A, 0x4A, 0xFF, 0x7F, 0xF8,
    0xED, 0xBD, 0xCF, 0xEF, 0x3C, 0x3F, 0x3F, 0x7D, 0xF9, 0xF5, 0xFF, 0x4B, 0x98, 0x97, 0x5E, 0xDF, 0x31, 0x74, 0xEE, 0xEB, 0xD3, 0xCF, 0x37, 0x9F, 0x7D, 0x7F, 0xFC, 0xEB, 0xE6, 0xCD, 0xC3, 0xDF, 0x2B, 0x3C, 0x7E, 0xF9, 0xF9, 0xFE, 0xC9, 0xCB,
    0x9F, 0x5F, 0x9F, 0x3E, 0xEA, 0xD8, 0xF5, 0xCD, 0x3B, 0x9F, 0xF4, 0xEF, 0x5F, 0xD2, 0x7D, 0xFC, 0xDE, 0xF1, 0x9B, 0x97, 0x0E, 0x2F, 0xBF, 0xFE, 0x7C, 0xFA, 0xE7, 0xDB, 0xDB, 0x26, 0x6D, 0xDB, 0xF3, 0xF1, 0xEF, 0xCE, 0xDB, 0x0B, 0x37, 0x0D,
    0x7B, 0x78, 0x68, 0xEE, 0xD7, 0x8F, 0xDF, 0xD7, 0x9D, 0x3A, 0x39, 0xE0, 0xD0, 0xCA, 0xD1, 0x07, 0x16, 0x5C, 0x3F, 0xB6, 0x7D, 0xC6, 0xB3, 0x8F, 0xEF, 0xBD, 0x8F, 0xF7, 0xB3, 0x78, 0xD4, 0xF6, 0xFD, 0xDB, 0x87, 0x5B, 0xB6, 0x7D, 0xE1, 0x04,
    0xDE, 0x93, 0x89, 0xB7, 0x94, 0x1F, 0xDE, 0xFE, 0x7A, 0xAB, 0xF2, 0x8F, 0xDF, 0xDD, 0x5B, 0x1F, 0xA5, 0xF7, 0xCA, 0x5E, 0x97, 0xA2, 0xCF, 0x8A, 0x5D, 0x3A, 0x53, 0xB2, 0xEC, 0xC1, 0x03, 0xB5, 0x3E, 0x41, 0x7F, 0x6B, 0x49, 0xFB, 0xFA, 0xED,
    0xD3, 0xBC, 0x8F, 0x1C, 0xE4, 0xD4, 0xF0, 0x79, 0xEE, 0xFF, 0xD9, 0xBF, 0xD3, 0x91, 0x52, 0xE1, 0xF3, 0x47, 0x80, 0x3F, 0xDA, 0x24, 0xF9, 0xF3, 0xEE, 0x92, 0xA8, 0xDD, 0xA9, 0x28, 0xF9, 0x8B, 0x7F, 0x25, 0x7F, 0xEF, 0xD7, 0xA7, 0x32, 0x71,
    0xFF, 0xF1, 0xF5, 0x1F, 0x5F, 0xFF, 0xF4, 0xF7, 0x1F, 0x9A, 0xFE, 0x94, 0xF4, 0xA7, 0xEE, 0xAE, 0xFF, 0xA0, 0x45, 0xFB, 0xA3, 0x0F, 0x3F, 0xF1, 0x5F, 0x02, 0xE5, 0x8F, 0x3F, 0xFC, 0xCC, 0xE3, 0x2F, 0xBC, 0x80, 0xF8, 0xB7, 0x67, 0x12, 0xFF,
    0xFA, 0xC8, 0x57, 0x9E, 0xFF, 0xF2, 0xC6, 0x53, 0xFF, 0xA6, 0x70, 0xFC, 0x7B, 0x0F, 0xBE, 0x7F, 0xD3, 0xA9, 0xCF, 0x9D, 0x7E, 0xF7, 0xF5, 0xD7, 0x7C, 0x7F, 0xE6, 0x57, 0x25, 0xCF, 0x37, 0xFE, 0x97, 0xDE, 0xDF, 0x1A, 0x7E, 0xD0, 0xE3, 0x57,
    0x9B, 0xFE, 0xB4, 0x0F, 0x57, 0xDD, 0xFD, 0x79, 0xF5, 0xFF, 0x18, 0xDD, 0xF7, 0x40, 0x35, 0xAF, 0x9F, 0xFF, 0xEC, 0x23, 0x8F, 0x5C, 0xBB, 0x90, 0xF5, 0x55, 0x75, 0x5C, 0x7F, 0x8F, 0xFD, 0xE9, 0xAF, 0xBF, 0xFE, 0xFD, 0xF5, 0x87, 0xDF, 0x7C,
    0xBB, 0xF7, 0xDF, 0xFF, 0x7B, 0xF6, 0xC7, 0x9F, 0x5F, 0x7E, 0xF5, 0x8B, 0x7C, 0x4F, 0x3D, 0xF6, 0xF4, 0x07, 0xD9, 0x9F, 0xFE, 0xF2, 0x6D, 0xFC, 0x3C, 0x7F, 0xFB, 0xE4, 0x8B, 0xEA, 0x1D, 0xFE, 0xF8, 0xF7, 0x17, 0xBF, 0xCF, 0xFE, 0xCA, 0xEF,
    0xAF, 0x3F, 0xFC, 0xD1, 0xEF, 0xBF, 0xFF, 0xFD, 0x05, 0x93, 0xCF, 0x7B, 0xFE, 0xA1, 0xF6, 0xDF, 0x7F, 0xFF, 0xD8, 0xE3, 0x5F, 0x7D, 0x7D, 0xE2, 0xBB, 0x37, 0x9F, 0xDB, 0xFD, 0xE7, 0x1F, 0xDE, 0xFE, 0xEC, 0xE7, 0xAF, 0x5D, 0xFF, 0xF1, 0x17,
    0x57, 0x7F, 0xFE, 0x62, 0xDD, 0x8F, 0xFE, 0xFE, 0xEB, 0x1F, 0x66, 0xDB, 0xFE, 0xE7, 0xDD, 0xFF, 0x13, 0xF9, 0xFD, 0x23, 0x25, 0x5B, 0xFE, 0xEB, 0xB3, 0x9F, 0x3E, 0xF3, 0xE3, 0xEF, 0x5F, 0xDA, 0xFD, 0x37, 0xBF, 0x76, 0x32, 0xF7, 0xE3, 0xA9,
    0xBC, 0x5E, 0xC8, 0xD7, 0xF7, 0x37, 0xDB, 0xCA, 0xF8, 0xE9, 0x27, 0x1F, 0x4A, 0xEC, 0xAD, 0x26, 0x1F, 0xDE, 0x83, 0x81, 0x84, 0xBF, 0x6C, 0xF9, 0xDD, 0x9F, 0x91, 0xEF, 0xEA, 0x71, 0x1E, 0xDF, 0xE1, 0xED, 0xD9, 0xBD, 0x3A, 0x7D, 0xFD, 0x7D,
    0x6F, 0x39, 0x7E, 0xF5, 0x31, 0x77, 0x5F, 0xFB, 0xFA, 0x17, 0xB8, 0x98, 0x3D, 0xFE, 0xC1, 0x3B, 0x9E, 0xFF, 0xD1, 0xF3, 0xCF, 0x48, 0xF8, 0xFA, 0xEE, 0xEB, 0xEF, 0xBD, 0xC8, 0xBA, 0x4A, 0x99, 0x3B, 0xFE, 0x55, 0x67, 0x0E, 0x2C, 0xFE, 0xB3,
    0xBB, 0x0E, 0xFB, 0x7B, 0xEE, 0xC6, 0xDA, 0xBE, 0xEC, 0x81, 0x46, 0xCD, 0x3E, 0xC0, 0xE4, 0x89, 0x6A, 0xFB, 0xFD, 0x7A, 0xDB, 0xCF, 0x61, 0xAA, 0xFE, 0xFB, 0x0B, 0xBC, 0xE8, 0x09, 0xEB, 0x8F, 0xEF, 0xA0, 0xFF, 0xBB, 0x1A, 0xBE, 0xD1, 0x52,
    0x26, 0x4D, 0x60, 0xFE, 0xFE, 0xF3, 0x3F, 0xFF, 0xF0, 0xD7, 0x07, 0x8D, 0x7F, 0x85, 0x40, 0xDA, 0xFF, 0xE6, 0xFB, 0xEE, 0xCB, 0xB6, 0x7F, 0xC5, 0xEF, 0x3B, 0x29, 0x64, 0x84, 0x66, 0xE2, 0xCF, 0x7C, 0xFD, 0x7E, 0xEA, 0xDF, 0xE8, 0xF6, 0x53,
    0x14, 0xF0, 0xDF, 0x3F, 0xF9, 0xF5, 0xD3, 0x2F, 0x61, 0xFC, 0xFA, 0xE3, 0x5F, 0x39, 0xFE, 0xE3, 0x2F, 0x5F, 0x3E, 0xF7, 0xD4, 0xE7, 0x5F, 0x61, 0x88, 0xF4, 0xAB, 0xBE, 0xBF, 0xFB, 0x84, 0xF2, 0xEF, 0xBF, 0xFF, 0xFE, 0xFB, 0xEF, 0xBF, 0xFF,
    0xFE, 0xFB, 0xEF, 0xBF, 0xFF, 0xFE, 0xFB, 0xEF, 0xBF, 0xFF, 0xFE, 0xFB, 0xEF, 0xBF, 0xFF, 0xFE, 0xFB, 0xEF, 0xBF, 0xFF, 0xFE, 0x13, 0xE7, 0x7F
};

image_info_t clock_bln47_info =
{
    .type  = IMG_TYPE_COMPRESS,
    .pixel = RTGRAPHIC_PIXEL_FORMAT_RGB332,
    .x = 0,
    .y = 0,
    .w = 120,
    .h = 120,
    .size = 784UL,
    .data =  clock_bln47_120_120,
};

#endif

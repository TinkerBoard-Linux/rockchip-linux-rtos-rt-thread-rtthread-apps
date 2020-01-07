/**
  * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  */

#include <rtthread.h>
#if defined(OLPC_APP_NOTE_ENABLE)
#include "applications/olpc_demo/image_info.h"

static const unsigned char note_subbtnrub081_120_80[192UL] =
{
    0x03, 0xFE, 0xFF, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD,
    0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF,
    0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0x9D, 0x6B, 0xFB, 0xD7, 0xD6, 0x4F, 0x7B, 0xFF, 0x7F, 0xFD, 0xFA, 0x55, 0xEF, 0xDF, 0xAF, 0xFF, 0xB4, 0xFE,
    0xFA, 0xFB, 0x43, 0xEB, 0xBF, 0xBF, 0x3F, 0xF3, 0xFE, 0xFB, 0xFB, 0x2B, 0xEB, 0x2F, 0xBF, 0x7F, 0xFF, 0xFE, 0xF3, 0xFB, 0x17, 0xDB, 0xEF, 0x8F, 0x9F, 0x3D, 0x7F, 0xFE, 0xEA, 0xF9, 0xF3, 0xE7, 0xFF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB,
    0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0x5F, 0xFC, 0xFF
};

image_info_t note_subbtnrub081_info =
{
    .type  = IMG_TYPE_COMPRESS,
    .pixel = RTGRAPHIC_PIXEL_FORMAT_RGB332,
    .x = 138,
    .y = 0,
    .w = 120,
    .h = 80,
    .size = 192UL,
    .data = note_subbtnrub081_120_80,
};

#endif

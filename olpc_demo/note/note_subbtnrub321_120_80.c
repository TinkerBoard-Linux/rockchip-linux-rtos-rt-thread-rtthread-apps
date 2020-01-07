/**
  * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  */

#include <rtthread.h>
#if defined(OLPC_APP_NOTE_ENABLE)
#include "applications/olpc_demo/image_info.h"

static const unsigned char note_subbtnrub321_120_80[259UL] =
{
    0x03, 0xFE, 0xFF, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD,
    0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF,
    0xBF, 0x72, 0x6D, 0xFF, 0xFE, 0xF9, 0xE3, 0xAF, 0xBE, 0xFF, 0x3F, 0xFF, 0xFD, 0xCA, 0xF5, 0xFF, 0xD7, 0xAF, 0xDF, 0xF7, 0xFE, 0xFF, 0xFA, 0xF5, 0xAB, 0xD7, 0xFF, 0x5F, 0xFD, 0x7E, 0xD7, 0xFA, 0xFF, 0x6B, 0xEB, 0x37, 0xBD, 0x7F, 0xBF, 0xFE,
    0xD0, 0xFA, 0xF7, 0xEB, 0xCF, 0xBC, 0x7F, 0xBF, 0xFE, 0xC9, 0xFB, 0xEF, 0xEF, 0x6F, 0xAC, 0xFF, 0xFE, 0xFE, 0xC3, 0xFA, 0xEF, 0xEF, 0xEF, 0x8F, 0x9F, 0x3E, 0x7F, 0xFC, 0xED, 0xFB, 0x8B, 0xC7, 0xDF, 0x9F, 0xBF, 0xF8, 0xFE, 0xFC, 0xB9, 0xF3,
    0x97, 0x7E, 0x9F, 0xBF, 0xF1, 0xFE, 0xFC, 0x7D, 0xF7, 0xE7, 0x6F, 0xBB, 0x3F, 0x7F, 0xD7, 0xFD, 0xF9, 0x03, 0x2F, 0xCF, 0x1F, 0xFF, 0xF6, 0xFE, 0xA4, 0xAB, 0x63, 0xD5, 0xBF, 0x7F, 0x7F, 0x7F, 0xDC, 0xFD, 0xE9, 0xDF, 0x57, 0xDE, 0x9E, 0x3F,
    0x7F, 0xF3, 0xFC, 0xF9, 0x6B, 0xE7, 0xAF, 0x54, 0x3B, 0x7F, 0xDD, 0xCF, 0xF9, 0x1B, 0x45, 0xCE, 0x9F, 0xA8, 0xEF, 0xFE, 0x42, 0x5F, 0xF3, 0x17, 0xBA, 0x9B, 0xBF, 0xCF, 0xE4, 0xFD, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD,
    0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0x44, 0xFF, 0x07
};

image_info_t note_subbtnrub321_info =
{
    .type  = IMG_TYPE_COMPRESS,
    .pixel = RTGRAPHIC_PIXEL_FORMAT_RGB332,
    .x = 930,
    .y = 0,
    .w = 120,
    .h = 80,
    .size = 259UL,
    .data = note_subbtnrub321_120_80,
};

#endif

/**
  * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  */

#include <rtthread.h>
#if defined(OLPC_APP_BLOCK_ENABLE)
#include "applications/olpc_demo/image_info.h"

static const unsigned char block_num7_20_26[78UL] =
{
    0xFF, 0xFF, 0xF0, 0xE0, 0x00, 0x30, 0xE0, 0x00, 0x10, 0xE0, 0x00, 0x10, 0xE0, 0x00, 0x10, 0xFF, 0xFC, 0x30, 0xFF, 0xF8, 0x70, 0xFF, 0xF0, 0xF0, 0xFF, 0xF0, 0xF0, 0xFF, 0xE1, 0xF0, 0xFF, 0xE3, 0xF0, 0xFF, 0xC3, 0xF0, 0xFF, 0x87, 0xF0, 0xFF,
    0x87, 0xF0, 0xFF, 0x87, 0xF0, 0xFF, 0x0F, 0xF0, 0xFF, 0x0F, 0xF0, 0xFE, 0x0F, 0xF0, 0xFE, 0x1F, 0xF0, 0xFE, 0x1F, 0xF0, 0xFC, 0x1F, 0xF0, 0xFC, 0x1F, 0xF0, 0xFC, 0x1F, 0xF0, 0xFC, 0x3F, 0xF0, 0xFE, 0x3F, 0xF0, 0xFF, 0xFF, 0xF0
};

image_info_t block_num7_info =
{
    .type  = IMG_TYPE_RAW,
    .pixel = RTGRAPHIC_PIXEL_FORMAT_GRAY1,
    .x = 830,
    .y = 92,
    .w = 20,
    .h = 26,
    .size = 78UL,
    .data = block_num7_20_26,
};

#endif

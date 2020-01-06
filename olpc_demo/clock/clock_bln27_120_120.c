/**
  * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
  *
  * SPDX-License-Identifier: Apache-2.0
  */

#include <rtthread.h>
#include "applications/olpc_demo/image_info.h"
#if defined(OLPC_APP_CLOCK_BLN_ENABLE)

static const unsigned char clock_bln27_120_120[1790UL] =
{
    0x03, 0x00, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE,
    0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 0xFF, 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0x3F, 0x75, 0x04, 0xFE, 0xF6, 0xFB, 0xFB, 0x07, 0x40, 0xF0, 0xCF, 0x9F, 0xBF, 0x7F, 0xFC, 0xBB, 0xE7,
    0xCB, 0xD7, 0xCE, 0x1F, 0x7E, 0x7D, 0xFE, 0xF7, 0xF9, 0xB3, 0xAF, 0x5F, 0x7F, 0xF9, 0x7E, 0xF7, 0xEC, 0xFD, 0xFB, 0xE7, 0x7F, 0x7E, 0x3C, 0xFD, 0xDB, 0xED, 0xFD, 0xDB, 0xFF, 0xEF, 0x9F, 0x3F, 0xF7, 0xFB, 0xA8, 0xEF, 0xC3, 0xCF, 0xEF, 0xDF,
    0x3F, 0x7B, 0xF1, 0xF7, 0x29, 0x7F, 0x6F, 0x7F, 0x7F, 0x41, 0x01, 0x81, 0xBF, 0x7F, 0xFF, 0xF8, 0xE3, 0x3B, 0x87, 0x1F, 0x3F, 0xFD, 0x7C, 0xFB, 0x12, 0xFE, 0xFD, 0x4B, 0x68, 0xF0, 0xD7, 0xCF, 0xFE, 0xFB, 0x6E, 0xF8, 0xE4, 0xB5, 0x9F, 0x9F,
    0xBF, 0xE1, 0x9F, 0xFF, 0xFC, 0xF7, 0x0A, 0x12, 0xFC, 0xFF, 0xBB, 0xE7, 0x5D, 0x36, 0x3A, 0xE7, 0xD7, 0xD2, 0xE9, 0x8F, 0x77, 0x2F, 0x02, 0x5E, 0x7B, 0xF4, 0xE8, 0xCC, 0xFD, 0xEB, 0xEF, 0xEF, 0x7B, 0x33, 0xF7, 0xD8, 0xE4, 0x9D, 0x7F, 0xF7,
    0xEE, 0x5B, 0x3D, 0xFA, 0xF7, 0xFE, 0x75, 0xF3, 0x87, 0xAF, 0x97, 0xB7, 0x6D, 0xE1, 0x1A, 0xE0, 0xC3, 0xB7, 0x87, 0x3E, 0xBB, 0x34, 0xFC, 0xD8, 0xAA, 0x55, 0xAB, 0x4E, 0x1C, 0x98, 0x2C, 0xE1, 0xC8, 0xF1, 0x7B, 0x3F, 0x8F, 0x1D, 0xDC, 0xBC,
    0xF5, 0xF9, 0xF0, 0xD5, 0xC3, 0xF5, 0x2D, 0xF5, 0xF9, 0x5D, 0xF8, 0x22, 0xF0, 0x3D, 0xC7, 0xDF, 0x1B, 0x38, 0x76, 0x6C, 0xB7, 0x45, 0x1D, 0x93, 0x27, 0x21, 0xA2, 0x36, 0x6D, 0xF9, 0xF0, 0xE7, 0x97, 0xBF, 0x7E, 0xD3, 0xBC, 0xD1, 0xE4, 0x17,
    0x2C, 0x50, 0x40, 0x2C, 0xDF, 0x3F, 0xE5, 0xF8, 0xD1, 0x6B, 0x55, 0xB9, 0x5E, 0x70, 0x7E, 0xEF, 0xAB, 0xAB, 0x6D, 0x68, 0x3C, 0x39, 0xFE, 0xCC, 0x15, 0x9B, 0x94, 0x4F, 0xBE, 0xD8, 0x12, 0x2C, 0xAC, 0xAF, 0xDF, 0x58, 0x8A, 0xD0, 0x8B, 0x97,
    0xB7, 0xBD, 0x24, 0xFE, 0xBE, 0x09, 0xE3, 0x5F, 0xB8, 0x70, 0xE2, 0x8C, 0xD7, 0x25, 0xBF, 0x5C, 0xD5, 0x68, 0xD2, 0xC6, 0xB1, 0x2D, 0xC8, 0x77, 0x18, 0x7B, 0x8E, 0x61, 0xE5, 0x8F, 0x4E, 0xFE, 0x90, 0xC5, 0xE7, 0xCF, 0xFE, 0xEC, 0xF6, 0xA6,
    0x62, 0x45, 0x3C, 0xFF, 0xFC, 0xFA, 0xF9, 0xBD, 0x0A, 0xBB, 0x01, 0xFB, 0x84, 0xBD, 0x77, 0xAE, 0x7E, 0xFC, 0xD9, 0x1F, 0x7F, 0xBE, 0x8E, 0x9F, 0xCD, 0x6F, 0xBF, 0x30, 0x7F, 0x9C, 0xF3, 0xAF, 0x3F, 0x6F, 0xE0, 0xDB, 0xB6, 0x6E, 0xC4, 0x3E,
    0x35, 0xC8, 0x16, 0x88, 0xC7, 0x6F, 0x7A, 0xFC, 0x44, 0xDA, 0x9E, 0x7A, 0xFD, 0xFD, 0x5D, 0xC4, 0x2C, 0xBF, 0xF2, 0x53, 0x93, 0x1E, 0x39, 0xF9, 0x43, 0x57, 0xD0, 0x5F, 0xFE, 0xD0, 0x95, 0x37, 0x54, 0xBE, 0x04, 0xD8, 0x23, 0x8E, 0xDF, 0xE8,
    0x2C, 0xCB, 0xA3, 0x5B, 0x5B, 0xE2, 0x1A, 0xD5, 0x4E, 0x1E, 0x41, 0xC3, 0xFA, 0xF1, 0x13, 0x9D, 0x8D, 0xFC, 0xB8, 0xE3, 0xE7, 0x0E, 0x23, 0xEC, 0xE5, 0x35, 0x90, 0xDF, 0x3B, 0xCC, 0x60, 0xAE, 0x9F, 0xBF, 0x79, 0xFA, 0xB1, 0x8F, 0xFB, 0xE5,
    0x1A, 0x1C, 0xFB, 0xFB, 0x31, 0xCD, 0x37, 0x33, 0x6B, 0x7E, 0xEC, 0xE7, 0xB7, 0x3D, 0x2F, 0xFA, 0xF4, 0x1B, 0xBB, 0xF1, 0xF1, 0xC3, 0xD2, 0x4F, 0x3F, 0xF0, 0x7D, 0x6B, 0x5B, 0x6D, 0x09, 0xF3, 0xA9, 0x35, 0x1F, 0x77, 0x2B, 0xCF, 0x2B, 0xE0,
    0x20, 0xB9, 0xD2, 0x22, 0x9A, 0x8F, 0x9F, 0xF9, 0xA5, 0x2F, 0xB6, 0x37, 0xFE, 0xF8, 0xC7, 0x9F, 0xBD, 0x82, 0xB1, 0xF9, 0x57, 0xB8, 0x7E, 0xF9, 0x8B, 0x45, 0x2E, 0x5F, 0xCB, 0xCF, 0xFB, 0x25, 0xDF, 0xF7, 0xF9, 0x1F, 0xCC, 0x5F, 0xBB, 0xEF,
    0xE7, 0x6B, 0x1A, 0xE5, 0xF9, 0x8B, 0x52, 0x00, 0x5B, 0xE4, 0xEC, 0x97, 0x97, 0x55, 0x03, 0x0D, 0x16, 0xEE, 0x22, 0x1C, 0xFF, 0xAC, 0x65, 0x2B, 0x5F, 0x74, 0x9B, 0xF2, 0xFB, 0xEE, 0x38, 0xFD, 0xE4, 0x72, 0x1A, 0x30, 0x9D, 0xF4, 0xBB, 0x5C,
    0xA3, 0xF6, 0x2D, 0xE8, 0xF7, 0x77, 0x81, 0xA8, 0xBC, 0xD2, 0xCF, 0xBD, 0x8C, 0x02, 0xFA, 0x3A, 0xA7, 0xB3, 0x1C, 0x9B, 0x6B, 0xFA, 0x04, 0xE3, 0x2B, 0x3C, 0x9F, 0xF9, 0xAD, 0x9D, 0xC6, 0xBF, 0x4F, 0xED, 0x81, 0x75, 0x1E, 0xFE, 0xED, 0x45,
    0x8C, 0x74, 0x82, 0xF6, 0x6A, 0x8B, 0x27, 0xEB, 0xC6, 0xCD, 0xCE, 0x3F, 0x29, 0x9D, 0x2A, 0x9E, 0x1F, 0xA4, 0xE3, 0x03, 0x63, 0x4D, 0x2D, 0xED, 0xD9, 0xCF, 0x5F, 0x34, 0xF3, 0x15, 0x7E, 0x4E, 0x68, 0x07, 0xEA, 0xAF, 0xAD, 0x5E, 0xFB, 0x11,
    0xC0, 0xA3, 0x7B, 0x3E, 0xF3, 0x1B, 0xB6, 0x29, 0xFF, 0xF9, 0xC1, 0x6B, 0x0F, 0xBC, 0xBD, 0xC3, 0x76, 0xDE, 0xF9, 0xCA, 0xC6, 0x5F, 0x17, 0x22, 0x8F, 0x15, 0xB4, 0xD6, 0xDA, 0xEE, 0xA1, 0x05, 0x66, 0xB4, 0x06, 0xFC, 0xB0, 0x07, 0x5B, 0xBE,
    0x86, 0x5A, 0xCF, 0xBE, 0xB9, 0xDA, 0x8E, 0x97, 0x3F, 0x6C, 0xBD, 0x73, 0x52, 0xD8, 0xDF, 0x83, 0xE4, 0xFF, 0x3E, 0x78, 0x65, 0xBF, 0x0A, 0xFB, 0x47, 0x7E, 0x40, 0xAD, 0x9C, 0x3F, 0x42, 0xF9, 0x3B, 0xAD, 0xDD, 0xFC, 0x2A, 0x01, 0x54, 0x75,
    0x7B, 0xF9, 0xE5, 0xDF, 0x7E, 0x45, 0xF9, 0x27, 0x46, 0xBD, 0x7E, 0x9D, 0xFD, 0xD0, 0x0F, 0x78, 0x7F, 0xE9, 0xD3, 0xAF, 0x80, 0x82, 0xF6, 0xF3, 0xBB, 0x15, 0x28, 0xC7, 0x93, 0xC6, 0x1F, 0x7F, 0xB1, 0xF2, 0x7B, 0x37, 0x6D, 0x07, 0xC7, 0xE5,
    0xD7, 0xDE, 0x54, 0xED, 0x59, 0xC8, 0x6F, 0xBA, 0xE9, 0xF2, 0xAB, 0x2E, 0xB1, 0xFC, 0x9F, 0x4A, 0x4C, 0x15, 0xC8, 0xE6, 0xA3, 0x7E, 0x7D, 0xE3, 0x1B, 0x80, 0x2F, 0xBF, 0xFC, 0xD4, 0x6B, 0x0F, 0x99, 0x73, 0x7B, 0xA7, 0xD4, 0xE3, 0x7F, 0xFE,
    0x53, 0xDE, 0xAE, 0x71, 0xB1, 0xD2, 0x6B, 0xBC, 0x63, 0x0E, 0x4C, 0xA3, 0x57, 0x6B, 0xF5, 0xD4, 0xB6, 0x5F, 0xBD, 0xFB, 0xEC, 0xEB, 0xFD, 0xFE, 0xB9, 0xD4, 0xED, 0xEE, 0x7E, 0xFC, 0xDE, 0x07, 0xCC, 0xB0, 0x04, 0xB7, 0xE1, 0x5F, 0x1D, 0x41,
    0x09, 0x74, 0xC1, 0x9F, 0xFB, 0xDB, 0x5E, 0x6F, 0xD7, 0x76, 0xF1, 0xD0, 0x43, 0x26, 0xB5, 0x09, 0xEF, 0x47, 0x1F, 0xBF, 0x56, 0xF1, 0x53, 0xCF, 0x39, 0xB4, 0xC9, 0x42, 0x5D, 0xB8, 0x02, 0x44, 0xA3, 0xFE, 0x87, 0x3F, 0x6E, 0x77, 0x8F, 0xAB,
    0xD0, 0x47, 0x6F, 0x7E, 0xF4, 0xFB, 0xEF, 0x96, 0xF9, 0xFB, 0x54, 0x0E, 0xFF, 0xC7, 0xFF, 0x6E, 0x8F, 0x00, 0x7B, 0x94, 0x08, 0x08, 0xEC, 0x7E, 0xF7, 0x43, 0x5F, 0xE9, 0xD1, 0x7F, 0x77, 0xF7, 0xFD, 0xBF, 0x81, 0x7F, 0xFA, 0x70, 0xAA, 0x6C,
    0xF4, 0x19, 0xF0, 0xA7, 0xBD, 0xD8, 0xBF, 0xD5, 0x3C, 0x30, 0xED, 0xFD, 0xF0, 0xCD, 0x37, 0xE8, 0x83, 0x37, 0xF7, 0x9D, 0x12, 0xB0, 0xDC, 0x01, 0xFB, 0x9B, 0x3F, 0xF9, 0xEF, 0x7F, 0x7F, 0x80, 0xD8, 0xE7, 0x1C, 0x7C, 0xF6, 0x07, 0xDF, 0xCE,
    0xDA, 0xDE, 0x1F, 0x7F, 0x33, 0xDC, 0x1F, 0x7D, 0xAB, 0x01, 0x7E, 0xFF, 0x59, 0xCF, 0xFF, 0xC7, 0xFB, 0xCE, 0xF7, 0xFE, 0xF3, 0x5B, 0x3E, 0xC3, 0x1F, 0xF7, 0xBF, 0x5E, 0xA3, 0xD2, 0x12, 0x5C, 0xBA, 0xC1, 0x93, 0x1F, 0xFB, 0xFB, 0x43, 0x6F,
    0x4C, 0xEC, 0x91, 0x84, 0xBE, 0x19, 0xBE, 0x79, 0x7F, 0xBA, 0x41, 0xCA, 0x8E, 0x6B, 0x5C, 0x61, 0x53, 0xD4, 0xFB, 0xCF, 0x73, 0x7F, 0xE8, 0xBF, 0x47, 0xD3, 0xE3, 0xBE, 0xBF, 0x3D, 0xEB, 0x55, 0x1F, 0xF6, 0xB0, 0x6F, 0x3C, 0xEC, 0xDF, 0x3D,
    0xFE, 0xFD, 0xBF, 0x87, 0xB7, 0x04, 0xDE, 0xEF, 0xCE, 0xFB, 0xE3, 0x33, 0x9F, 0xF9, 0xB1, 0x43, 0xF9, 0x7B, 0xD7, 0xCB, 0xFB, 0xEF, 0xEE, 0xFF, 0xBC, 0x78, 0x69, 0xBA, 0xFE, 0xF9, 0xCF, 0xFF, 0x3D, 0xE8, 0x8D, 0x65, 0xB9, 0x56, 0x61, 0x07,
    0x7B, 0xF4, 0xE3, 0x5F, 0x82, 0xDF, 0xBF, 0x54, 0xD9, 0xF5, 0x88, 0xFF, 0x3C, 0xC9, 0xC1, 0x1F, 0xFE, 0xF0, 0x47, 0x9B, 0xB8, 0xD7, 0x47, 0x9E, 0xE4, 0xE3, 0xC5, 0x1E, 0x8D, 0xF0, 0x63, 0x7E, 0xF8, 0x66, 0x08, 0x1F, 0xF6, 0x1F, 0xBA, 0x3D,
    0x70, 0x06, 0x2F, 0x0E, 0xF5, 0x2D, 0xE3, 0x4F, 0xA3, 0xD0, 0x21, 0x2F, 0x78, 0xA9, 0x17, 0x5A, 0xE9, 0x1B, 0x3B, 0x12, 0xF6, 0x8B, 0xAB, 0xDB, 0xD0, 0xC5, 0x3F, 0xBC, 0xD9, 0xAF, 0x6F, 0x5D, 0x76, 0x27, 0xFF, 0x66, 0xE1, 0xED, 0x96, 0x74,
    0xE6, 0xA7, 0x34, 0x7E, 0xCA, 0xCF, 0x8F, 0xF8, 0xF8, 0xA7, 0x3D, 0xD5, 0x9B, 0xD7, 0x38, 0xFC, 0x23, 0xBD, 0xE6, 0xF8, 0x37, 0xC9, 0x70, 0x96, 0x73, 0x5C, 0xFE, 0x5E, 0x36, 0x11, 0xFB, 0x28, 0x2C, 0x5F, 0xD3, 0xD1, 0x16, 0xF2, 0x06, 0xC8,
    0x1F, 0x11, 0xDC, 0x3A, 0x7F, 0x7F, 0x40, 0x4D, 0x57, 0xFD, 0x05, 0xBF, 0xCE, 0x5E, 0xD6, 0x5C, 0xC6, 0xF4, 0xE9, 0xF0, 0xB7, 0xE0, 0x70, 0xF8, 0x73, 0x9C, 0x6A, 0xD6, 0x33, 0x16, 0xD4, 0xDF, 0x2D, 0x1D, 0x6E, 0xF8, 0xC3, 0x79, 0x7B, 0x91,
    0xDD, 0xCE, 0x23, 0xDA, 0x8A, 0xD7, 0xF8, 0xF7, 0xC1, 0x4A, 0xFD, 0xF3, 0x9F, 0xBF, 0x70, 0x67, 0xFB, 0xFA, 0xD0, 0xEF, 0x05, 0xF1, 0xF7, 0x1B, 0x94, 0x9D, 0x60, 0xF7, 0x37, 0x3C, 0xA0, 0xF7, 0x3A, 0x14, 0x7F, 0xC0, 0x21, 0xCD, 0xE5, 0xF8,
    0x4B, 0x58, 0xC2, 0x4E, 0x7C, 0xB8, 0xE1, 0x90, 0xEE, 0x80, 0x04, 0x7E, 0x47, 0xBA, 0x58, 0x6D, 0x9A, 0x7F, 0x7E, 0xA1, 0x3D, 0x6D, 0xE2, 0xEF, 0x93, 0x8D, 0xB4, 0xEB, 0x25, 0xCB, 0xFB, 0x40, 0x67, 0x77, 0xD3, 0x75, 0xB3, 0x9C, 0x86, 0xBB,
    0x67, 0x6F, 0xD6, 0x47, 0xAF, 0x30, 0x78, 0x7F, 0x0A, 0x26, 0xBE, 0x86, 0xD9, 0xDF, 0xE6, 0x36, 0x1F, 0xB7, 0x04, 0xF5, 0x3B, 0x8D, 0xDB, 0xE1, 0x33, 0xAA, 0xFE, 0x8F, 0xF9, 0x2E, 0xD9, 0x15, 0xEE, 0xE7, 0x40, 0xFD, 0x28, 0xAB, 0x9F, 0xFE,
    0x70, 0x1B, 0xFE, 0xAE, 0xEA, 0x97, 0xF9, 0xFA, 0xE3, 0x7B, 0x7B, 0xF6, 0x8B, 0xCD, 0x01, 0x9D, 0x93, 0x5C, 0xBF, 0x7E, 0xDB, 0xCF, 0xB0, 0xCB, 0xA8, 0x6F, 0x3F, 0x87, 0x35, 0x50, 0x7F, 0x05, 0xD6, 0xE7, 0x39, 0x7D, 0x3D, 0x27, 0x65, 0xF6,
    0xE2, 0x15, 0x1A, 0xCC, 0xE6, 0x15, 0xDE, 0xFC, 0xD4, 0xFF, 0x6B, 0xEA, 0xE8, 0x8F, 0xD9, 0x9C, 0x62, 0xF3, 0xF6, 0x7B, 0xE0, 0x77, 0x5E, 0xFC, 0x3A, 0x55, 0x3B, 0x2F, 0xFD, 0x35, 0x5C, 0x68, 0x0E, 0xBC, 0xCA, 0xE1, 0x90, 0x9D, 0x3F, 0x82,
    0x7D, 0xCD, 0x7F, 0x38, 0xFA, 0xB1, 0x2B, 0x7D, 0x0A, 0xBC, 0x27, 0x7C, 0xEA, 0x97, 0x5F, 0x63, 0x70, 0x9F, 0x4A, 0xF8, 0xC6, 0xFF, 0xAD, 0x81, 0xDE, 0xD3, 0x7B, 0xFE, 0xF3, 0x17, 0x59, 0x97, 0x11, 0xA4, 0xAE, 0xFE, 0xFF, 0x1B, 0xAC, 0x7E,
    0xCA, 0xFF, 0x3C, 0xEE, 0x9B, 0x54, 0xFF, 0xFA, 0xC7, 0x46, 0x27, 0xFB, 0x25, 0x5E, 0xB6, 0x98, 0x2B, 0xCF, 0xFA, 0xF2, 0xF3, 0xBF, 0xFD, 0x40, 0xE3, 0x76, 0x7B, 0x03, 0x53, 0xCD, 0x75, 0xEB, 0x1B, 0x69, 0x3D, 0xEA, 0x27, 0x5F, 0x79, 0x9C,
    0x96, 0x8C, 0xB4, 0xC8, 0xC6, 0xB7, 0xE1, 0xF5, 0x8B, 0xBF, 0xBD, 0xBB, 0xB9, 0xAE, 0xF4, 0xB7, 0xDF, 0x79, 0x6F, 0xA0, 0xFB, 0xAD, 0x3D, 0xEB, 0xAF, 0xFA, 0xFA, 0xCC, 0x9B, 0x50, 0xF6, 0xA3, 0xBD, 0x7F, 0x18, 0x8F, 0x5F, 0xB7, 0xF6, 0x93,
    0xDE, 0x23, 0xFB, 0xA7, 0x8E, 0xBA, 0xEC, 0xF1, 0x8A, 0x53, 0x8A, 0x57, 0x91, 0xE6, 0xFC, 0x1F, 0x7D, 0xC2, 0x2F, 0x67, 0xFA, 0xB2, 0xF7, 0xC7, 0x3A, 0xD3, 0x6A, 0xFB, 0xAD, 0x61, 0xF1, 0xC7, 0xFF, 0x79, 0xC8, 0x6D, 0x1B, 0xFC, 0x53, 0xD3,
    0x8B, 0xCA, 0xE7, 0x77, 0x1D, 0x75, 0x86, 0xD9, 0xB7, 0xF8, 0xA4, 0xDF, 0x9F, 0x8A, 0x34, 0x1F, 0x9E, 0xCF, 0x3B, 0x86, 0x99, 0xFF, 0xAA, 0x67, 0x3F, 0xFD, 0x97, 0x88, 0x3B, 0xCA, 0xE6, 0xDF, 0xFF, 0x2C, 0xBE, 0xBE, 0xF1, 0xC9, 0x6F, 0x7D,
    0x4C, 0xE6, 0xDF, 0xF9, 0xF1, 0x97, 0x9D, 0xE3, 0x0E, 0x47, 0xF8, 0xF5, 0xED, 0x9F, 0xFD, 0xED, 0xA7, 0xBE, 0xFB, 0x25, 0x16, 0xBD, 0xF8, 0xE8, 0xBF, 0x3A, 0xFC, 0xE7, 0x5F, 0x7F, 0x82, 0xC4, 0x7F, 0xEB, 0xD7, 0x2F, 0xBA, 0x88, 0xEF, 0x8C,
    0xFF, 0xCF, 0xD5, 0x1F, 0xB5, 0xCD, 0xDC, 0xBF, 0xFD, 0x79, 0x9F, 0xFE, 0xD6, 0xEE, 0x5F, 0xFF, 0x76, 0xC7, 0x57, 0xD7, 0xFA, 0xD7, 0xBF, 0xBD, 0xFA, 0xB7, 0xE5, 0xFE, 0x91, 0x16, 0x38, 0xFD, 0xFB, 0x13, 0x59, 0xFA, 0x9F, 0x7F, 0xFF, 0x72,
    0x3E, 0x9C, 0xF9, 0x3F, 0xB6, 0x7F, 0xD3, 0xA9, 0x0E, 0x5C, 0x4E, 0x6D, 0x05, 0x3F, 0xFE, 0xA9, 0x66, 0xA0, 0xB6, 0xFA, 0xD7, 0xBF, 0xFF, 0xFD, 0xEF, 0x7F, 0xFF, 0xE3, 0xE8, 0xFF
};

image_info_t clock_bln27_info =
{
    .type  = IMG_TYPE_COMPRESS,
    .pixel = RTGRAPHIC_PIXEL_FORMAT_RGB332,
    .x = 0,
    .y = 0,
    .w = 120,
    .h = 120,
    .size = 1790UL,
    .data =  clock_bln27_120_120,
};

#endif

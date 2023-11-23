/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
 */

#include <bfdev/popcount.h>
#include <export.h>

export const uint8_t
bfdev_popcount_table[256] = {
    [0x00] = 0, [0x01] = 1, [0x02] = 1, [0x03] = 2,
    [0x04] = 1, [0x05] = 2, [0x06] = 2, [0x07] = 3,
    [0x08] = 1, [0x09] = 2, [0x0a] = 2, [0x0b] = 3,
    [0x0c] = 2, [0x0d] = 3, [0x0e] = 3, [0x0f] = 4,
    [0x10] = 1, [0x11] = 2, [0x12] = 2, [0x13] = 3,
    [0x14] = 2, [0x15] = 3, [0x16] = 3, [0x17] = 4,
    [0x18] = 2, [0x19] = 3, [0x1a] = 3, [0x1b] = 4,
    [0x1c] = 3, [0x1d] = 4, [0x1e] = 4, [0x1f] = 5,
    [0x20] = 1, [0x21] = 2, [0x22] = 2, [0x23] = 3,
    [0x24] = 2, [0x25] = 3, [0x26] = 3, [0x27] = 4,
    [0x28] = 2, [0x29] = 3, [0x2a] = 3, [0x2b] = 4,
    [0x2c] = 3, [0x2d] = 4, [0x2e] = 4, [0x2f] = 5,
    [0x30] = 2, [0x31] = 3, [0x32] = 3, [0x33] = 4,
    [0x34] = 3, [0x35] = 4, [0x36] = 4, [0x37] = 5,
    [0x38] = 3, [0x39] = 4, [0x3a] = 4, [0x3b] = 5,
    [0x3c] = 4, [0x3d] = 5, [0x3e] = 5, [0x3f] = 6,
    [0x40] = 1, [0x41] = 2, [0x42] = 2, [0x43] = 3,
    [0x44] = 2, [0x45] = 3, [0x46] = 3, [0x47] = 4,
    [0x48] = 2, [0x49] = 3, [0x4a] = 3, [0x4b] = 4,
    [0x4c] = 3, [0x4d] = 4, [0x4e] = 4, [0x4f] = 5,
    [0x50] = 2, [0x51] = 3, [0x52] = 3, [0x53] = 4,
    [0x54] = 3, [0x55] = 4, [0x56] = 4, [0x57] = 5,
    [0x58] = 3, [0x59] = 4, [0x5a] = 4, [0x5b] = 5,
    [0x5c] = 4, [0x5d] = 5, [0x5e] = 5, [0x5f] = 6,
    [0x60] = 2, [0x61] = 3, [0x62] = 3, [0x63] = 4,
    [0x64] = 3, [0x65] = 4, [0x66] = 4, [0x67] = 5,
    [0x68] = 3, [0x69] = 4, [0x6a] = 4, [0x6b] = 5,
    [0x6c] = 4, [0x6d] = 5, [0x6e] = 5, [0x6f] = 6,
    [0x70] = 3, [0x71] = 4, [0x72] = 4, [0x73] = 5,
    [0x74] = 4, [0x75] = 5, [0x76] = 5, [0x77] = 6,
    [0x78] = 4, [0x79] = 5, [0x7a] = 5, [0x7b] = 6,
    [0x7c] = 5, [0x7d] = 6, [0x7e] = 6, [0x7f] = 7,
    [0x80] = 1, [0x81] = 2, [0x82] = 2, [0x83] = 3,
    [0x84] = 2, [0x85] = 3, [0x86] = 3, [0x87] = 4,
    [0x88] = 2, [0x89] = 3, [0x8a] = 3, [0x8b] = 4,
    [0x8c] = 3, [0x8d] = 4, [0x8e] = 4, [0x8f] = 5,
    [0x90] = 2, [0x91] = 3, [0x92] = 3, [0x93] = 4,
    [0x94] = 3, [0x95] = 4, [0x96] = 4, [0x97] = 5,
    [0x98] = 3, [0x99] = 4, [0x9a] = 4, [0x9b] = 5,
    [0x9c] = 4, [0x9d] = 5, [0x9e] = 5, [0x9f] = 6,
    [0xa0] = 2, [0xa1] = 3, [0xa2] = 3, [0xa3] = 4,
    [0xa4] = 3, [0xa5] = 4, [0xa6] = 4, [0xa7] = 5,
    [0xa8] = 3, [0xa9] = 4, [0xaa] = 4, [0xab] = 5,
    [0xac] = 4, [0xad] = 5, [0xae] = 5, [0xaf] = 6,
    [0xb0] = 3, [0xb1] = 4, [0xb2] = 4, [0xb3] = 5,
    [0xb4] = 4, [0xb5] = 5, [0xb6] = 5, [0xb7] = 6,
    [0xb8] = 4, [0xb9] = 5, [0xba] = 5, [0xbb] = 6,
    [0xbc] = 5, [0xbd] = 6, [0xbe] = 6, [0xbf] = 7,
    [0xc0] = 2, [0xc1] = 3, [0xc2] = 3, [0xc3] = 4,
    [0xc4] = 3, [0xc5] = 4, [0xc6] = 4, [0xc7] = 5,
    [0xc8] = 3, [0xc9] = 4, [0xca] = 4, [0xcb] = 5,
    [0xcc] = 4, [0xcd] = 5, [0xce] = 5, [0xcf] = 6,
    [0xd0] = 3, [0xd1] = 4, [0xd2] = 4, [0xd3] = 5,
    [0xd4] = 4, [0xd5] = 5, [0xd6] = 5, [0xd7] = 6,
    [0xd8] = 4, [0xd9] = 5, [0xda] = 5, [0xdb] = 6,
    [0xdc] = 5, [0xdd] = 6, [0xde] = 6, [0xdf] = 7,
    [0xe0] = 3, [0xe1] = 4, [0xe2] = 4, [0xe3] = 5,
    [0xe4] = 4, [0xe5] = 5, [0xe6] = 5, [0xe7] = 6,
    [0xe8] = 4, [0xe9] = 5, [0xea] = 5, [0xeb] = 6,
    [0xec] = 5, [0xed] = 6, [0xee] = 6, [0xef] = 7,
    [0xf0] = 4, [0xf1] = 5, [0xf2] = 5, [0xf3] = 6,
    [0xf4] = 5, [0xf5] = 6, [0xf6] = 6, [0xf7] = 7,
    [0xf8] = 5, [0xf9] = 6, [0xfa] = 6, [0xfb] = 7,
    [0xfc] = 6, [0xfd] = 7, [0xfe] = 7, [0xff] = 8,
};

export const bool
bfdev_popparity_table[256] = {
    [0x00] = false, [0x01] =  true, [0x02] =  true, [0x03] = false,
    [0x04] =  true, [0x05] = false, [0x06] = false, [0x07] =  true,
    [0x08] =  true, [0x09] = false, [0x0a] = false, [0x0b] =  true,
    [0x0c] = false, [0x0d] =  true, [0x0e] =  true, [0x0f] = false,
    [0x10] =  true, [0x11] = false, [0x12] = false, [0x13] =  true,
    [0x14] = false, [0x15] =  true, [0x16] =  true, [0x17] = false,
    [0x18] = false, [0x19] =  true, [0x1a] =  true, [0x1b] = false,
    [0x1c] =  true, [0x1d] = false, [0x1e] = false, [0x1f] =  true,
    [0x20] =  true, [0x21] = false, [0x22] = false, [0x23] =  true,
    [0x24] = false, [0x25] =  true, [0x26] =  true, [0x27] = false,
    [0x28] = false, [0x29] =  true, [0x2a] =  true, [0x2b] = false,
    [0x2c] =  true, [0x2d] = false, [0x2e] = false, [0x2f] =  true,
    [0x30] = false, [0x31] =  true, [0x32] =  true, [0x33] = false,
    [0x34] =  true, [0x35] = false, [0x36] = false, [0x37] =  true,
    [0x38] =  true, [0x39] = false, [0x3a] = false, [0x3b] =  true,
    [0x3c] = false, [0x3d] =  true, [0x3e] =  true, [0x3f] = false,
    [0x40] =  true, [0x41] = false, [0x42] = false, [0x43] =  true,
    [0x44] = false, [0x45] =  true, [0x46] =  true, [0x47] = false,
    [0x48] = false, [0x49] =  true, [0x4a] =  true, [0x4b] = false,
    [0x4c] =  true, [0x4d] = false, [0x4e] = false, [0x4f] =  true,
    [0x50] = false, [0x51] =  true, [0x52] =  true, [0x53] = false,
    [0x54] =  true, [0x55] = false, [0x56] = false, [0x57] =  true,
    [0x58] =  true, [0x59] = false, [0x5a] = false, [0x5b] =  true,
    [0x5c] = false, [0x5d] =  true, [0x5e] =  true, [0x5f] = false,
    [0x60] = false, [0x61] =  true, [0x62] =  true, [0x63] = false,
    [0x64] =  true, [0x65] = false, [0x66] = false, [0x67] =  true,
    [0x68] =  true, [0x69] = false, [0x6a] = false, [0x6b] =  true,
    [0x6c] = false, [0x6d] =  true, [0x6e] =  true, [0x6f] = false,
    [0x70] =  true, [0x71] = false, [0x72] = false, [0x73] =  true,
    [0x74] = false, [0x75] =  true, [0x76] =  true, [0x77] = false,
    [0x78] = false, [0x79] =  true, [0x7a] =  true, [0x7b] = false,
    [0x7c] =  true, [0x7d] = false, [0x7e] = false, [0x7f] =  true,
    [0x80] =  true, [0x81] = false, [0x82] = false, [0x83] =  true,
    [0x84] = false, [0x85] =  true, [0x86] =  true, [0x87] = false,
    [0x88] = false, [0x89] =  true, [0x8a] =  true, [0x8b] = false,
    [0x8c] =  true, [0x8d] = false, [0x8e] = false, [0x8f] =  true,
    [0x90] = false, [0x91] =  true, [0x92] =  true, [0x93] = false,
    [0x94] =  true, [0x95] = false, [0x96] = false, [0x97] =  true,
    [0x98] =  true, [0x99] = false, [0x9a] = false, [0x9b] =  true,
    [0x9c] = false, [0x9d] =  true, [0x9e] =  true, [0x9f] = false,
    [0xa0] = false, [0xa1] =  true, [0xa2] =  true, [0xa3] = false,
    [0xa4] =  true, [0xa5] = false, [0xa6] = false, [0xa7] =  true,
    [0xa8] =  true, [0xa9] = false, [0xaa] = false, [0xab] =  true,
    [0xac] = false, [0xad] =  true, [0xae] =  true, [0xaf] = false,
    [0xb0] =  true, [0xb1] = false, [0xb2] = false, [0xb3] =  true,
    [0xb4] = false, [0xb5] =  true, [0xb6] =  true, [0xb7] = false,
    [0xb8] = false, [0xb9] =  true, [0xba] =  true, [0xbb] = false,
    [0xbc] =  true, [0xbd] = false, [0xbe] = false, [0xbf] =  true,
    [0xc0] = false, [0xc1] =  true, [0xc2] =  true, [0xc3] = false,
    [0xc4] =  true, [0xc5] = false, [0xc6] = false, [0xc7] =  true,
    [0xc8] =  true, [0xc9] = false, [0xca] = false, [0xcb] =  true,
    [0xcc] = false, [0xcd] =  true, [0xce] =  true, [0xcf] = false,
    [0xd0] =  true, [0xd1] = false, [0xd2] = false, [0xd3] =  true,
    [0xd4] = false, [0xd5] =  true, [0xd6] =  true, [0xd7] = false,
    [0xd8] = false, [0xd9] =  true, [0xda] =  true, [0xdb] = false,
    [0xdc] =  true, [0xdd] = false, [0xde] = false, [0xdf] =  true,
    [0xe0] =  true, [0xe1] = false, [0xe2] = false, [0xe3] =  true,
    [0xe4] = false, [0xe5] =  true, [0xe6] =  true, [0xe7] = false,
    [0xe8] = false, [0xe9] =  true, [0xea] =  true, [0xeb] = false,
    [0xec] =  true, [0xed] = false, [0xee] = false, [0xef] =  true,
    [0xf0] = false, [0xf1] =  true, [0xf2] =  true, [0xf3] = false,
    [0xf4] =  true, [0xf5] = false, [0xf6] = false, [0xf7] =  true,
    [0xf8] =  true, [0xf9] = false, [0xfa] = false, [0xfb] =  true,
    [0xfc] = false, [0xfd] =  true, [0xfe] =  true, [0xff] = false,
};

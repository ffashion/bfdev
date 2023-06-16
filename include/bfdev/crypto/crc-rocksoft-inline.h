/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2022 John Sanpe <sanpeqf@gmail.com>
 */

#ifndef _BFDEV_CRYPTO_CRC_ROCKSOFT_INLINE_H_
#define _BFDEV_CRYPTO_CRC_ROCKSOFT_INLINE_H_

#include <bfdev/config.h>
#include <bfdev/cdefs.h>
#include <bfdev/stdint.h>
#include <bfdev/bits.h>
#include <bfdev/stddef.h>
#include <bfdev/align.h>
#include <bfdev/byteorder.h>

BFDEV_BEGIN_DECLS

#include <bfdev/crypto/crc-rocksoft-table.h>

static inline uint64_t
bfdev_crc_rocksoft_byte(uint64_t crc, const uint8_t data)
{
    unsigned int index = (crc ^ data) & 0xff;
	return bfdev_crc_rocksoft_table[0][index] ^ (crc >> 8);
}

static inline uint64_t
bfdev_crc_rocksoft_inline(const uint8_t *src, size_t len, uint64_t crc)
{
    const uint32_t *combine;
    uint32_t value[2];

    while (len && !bfdev_align_ptr_check(src, sizeof(*value))) {
        crc = bfdev_crc_rocksoft_byte(crc, *src++);
        len--;
    }

    for (combine = (const void *)src; len >= 8; len -= 8) {
        value[0] = bfdev_cpu_to_le32p(combine++) ^ (crc & 0xffffffff);
        value[1] = bfdev_cpu_to_le32p(combine++) ^ (crc >> 32);

        crc = (
            bfdev_crc_rocksoft_table[7][(value[0] >>  0) & 0xff] ^
            bfdev_crc_rocksoft_table[6][(value[0] >>  8) & 0xff] ^
            bfdev_crc_rocksoft_table[5][(value[0] >> 16) & 0xff] ^
            bfdev_crc_rocksoft_table[4][(value[0] >> 24) & 0xff] ^
            bfdev_crc_rocksoft_table[3][(value[1] >>  0) & 0xff] ^
            bfdev_crc_rocksoft_table[2][(value[1] >>  8) & 0xff] ^
            bfdev_crc_rocksoft_table[1][(value[1] >> 16) & 0xff] ^
            bfdev_crc_rocksoft_table[0][(value[1] >> 24) & 0xff]
        );
    }

    for (src = (const void *)combine; len; --len)
        crc = bfdev_crc_rocksoft_byte(crc, *src++);

    return crc;
}

BFDEV_END_DECLS

#endif /* _BFDEV_CRYPTO_CRC_ROCKSOFT_INLINE_H_ */
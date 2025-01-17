/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
 */

#ifndef _BFDEV_COMPILER_TYPES_H_
#define _BFDEV_COMPILER_TYPES_H_

/* Indirect macros required for expanded argument pasting, eg. __LINE__. */
#define ___BFDEV_PASTE(a,b) a##b
#define __BFDEV_PASTE(a,b) ___BFDEV_PASTE(a,b)

/* Attributes */
#include <bfdev/compiler/attributes.h>

#endif /* _BFDEV_COMPILER_TYPES_H_ */

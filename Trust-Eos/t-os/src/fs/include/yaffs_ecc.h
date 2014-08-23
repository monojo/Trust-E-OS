/*
 * YAFFS: Yet another FFS. A NAND-flash specific file system. 
 *
 * yaffs_ecc.c: ECC generation/correction algorithms.
 *
 * Copyright (C) 2002 Aleph One Ltd.
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
 
 /*
 * This code implements the ECC algorithm used in SmartMedia.
 *
 * The ECC comprises 22 bits of parity information and is stuffed into 3 bytes. 
 * The two unused bit are set to 1.
 * The ECC can correct single bit errors in a 256-byte page of data. Thus, two such ECC 
 * blocks are used on a 512-byte NAND page.
 *
 */

#ifndef __YAFFS_ECC_H__
#define __YAFFS_ECC_H__

void yaffs_ECCCalculate(const unsigned char *data,unsigned char *ecc);
int yaffs_ECCCorrect(unsigned char *data, unsigned char *read_ecc, const unsigned char *test_ecc);


#endif

/******************************************************************************
*
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
/*****************************************************************************/
/**
* @file xparameters_me.h
* @{
*
* This file contains stub xparameter definitions for ME.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------  -------- -----------------------------------------------------
* 1.0  Naresh  03/27/2018  Initial creation
* 1.1  Naresh  07/11/2018  Updated copyright info
* 1.2  Naresh  07/26/2018  Set num instances to 1 to avoid segmentation fault
* </pre>
*
******************************************************************************/
/*********************************************
* 
*********************************************/

#ifndef XPARAMETERSME_H   /* prevent circular inclusions */
#define XPARAMETERSME_H   /* by using protection macros */

#define XPAR_ME_NUM_INSTANCES	1
#define XPAR_ME_DEVICE_ID	1
#define XPAR_ME_ARRAY_OFFSET	0
#define XPAR_ME_NUM_ROWS	32      /* 2^5 */
#define XPAR_ME_NUM_COLUMNS	128     /* 2^7 */     

#endif  /* end of protection macro */

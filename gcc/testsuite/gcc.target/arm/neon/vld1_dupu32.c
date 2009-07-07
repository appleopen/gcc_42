/* APPLE LOCAL file v7 merge */
/* Test the `vld1_dupu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vld1_dupu32 (void)
{
  uint32x2_t out_uint32x2_t;

  out_uint32x2_t = vld1_dup_u32 (0);
}

/* { dg-final { scan-assembler "vld1\.32\[ 	\]+((\\\{\[dD\]\[0-9\]+\\\[\\\]\\\})|(\[dD\]\[0-9\]+\\\[\\\])), \\\[\[rR\]\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */

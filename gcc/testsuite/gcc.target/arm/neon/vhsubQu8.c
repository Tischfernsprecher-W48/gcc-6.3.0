/* Test the `vhsubQu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vhsubQu8 (void)
{
  uint8x16_t out_uint8x16_t;
  uint8x16_t arg0_uint8x16_t;
  uint8x16_t arg1_uint8x16_t;

  out_uint8x16_t = vhsubq_u8 (arg0_uint8x16_t, arg1_uint8x16_t);
}

/* { dg-final { scan-assembler "vhsub\.u8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
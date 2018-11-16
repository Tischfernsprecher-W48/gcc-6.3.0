/* Test the `vsubwu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vsubwu8 (void)
{
  uint16x8_t out_uint16x8_t;
  uint16x8_t arg0_uint16x8_t;
  uint8x8_t arg1_uint8x8_t;

  out_uint16x8_t = vsubw_u8 (arg0_uint16x8_t, arg1_uint8x8_t);
}

/* { dg-final { scan-assembler "vsubw\.u8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */

#include <arm_neon.h>

/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-fno-fat-lto-objects" } } */
/* { dg-skip-if "" { arm*-*-* } } */

uint64x2x3_t
f_vld3q_lane_u64 (uint64_t * p, uint64x2x3_t v)
{
  uint64x2x3_t res;
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  res = vld3q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
  res = vld3q_lane_u64 (p, v, -1);
  return res;
}

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// LongRangeOp.h
//
// Code generation for function 'LongRangeOp'
//

#pragma once

// Include files
#include "LongRangeOp_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void LongRangeOp(const emlrtStack *sp, const coder::array<creal_T, 2U> &loc,
                 const coder::array<real_T, 2U> &factor,
                 const struct0_T *Sector, coder::array<creal_T, 2U> &res);

// End of code generation (LongRangeOp.h)

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mpower.h
//
// Code generation for function 'mpower'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
int32_T mpower(const emlrtStack *sp, real_T a, int32_T b);

real_T mpower(const emlrtStack *sp, real_T a, real_T b);

} // namespace coder

// End of code generation (mpower.h)

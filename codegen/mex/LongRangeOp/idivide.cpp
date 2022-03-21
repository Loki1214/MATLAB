//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// idivide.cpp
//
// Code generation for function 'idivide'
//

// Include files
#include "idivide.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo bb_emlrtRSI{
    25,        // lineNo
    "idivide", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/idivide.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    78,              // lineNo
    "idivide_floor", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/idivide.m" // pathName
};

static emlrtRTEInfo i_emlrtRTEI{
    103,           // lineNo
    9,             // colNo
    "eml_idivide", // fName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/idivide.m" // pName
};

static emlrtRSInfo eb_emlrtRSI{
    132,                  // lineNo
    "eml_scalar_rdivide", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/idivide.m" // pathName
};

// Function Declarations
static int32_T _s32_u32_(const emlrtStack *sp, uint32_T b);

static uint32_T _u32_add__(const emlrtStack *sp, uint32_T b, uint32_T c);

static int32_T divv_s32_sat_floor(const emlrtStack *sp, int32_T numerator,
                                  int32_T denominator);

// Function Definitions
static int32_T _s32_u32_(const emlrtStack *sp, uint32_T b)
{
  int32_T a;
  a = static_cast<int32_T>(b);
  if (a < 0) {
    emlrtIntegerOverflowErrorR2012b(nullptr, (emlrtCTX)sp);
  }
  return a;
}

static uint32_T _u32_add__(const emlrtStack *sp, uint32_T b, uint32_T c)
{
  uint32_T a;
  a = b + c;
  if (a < b) {
    emlrtIntegerOverflowErrorR2012b(nullptr, (emlrtCTX)sp);
  }
  return a;
}

static int32_T divv_s32_sat_floor(const emlrtStack *sp, int32_T numerator,
                                  int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtCTX)sp);
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    if (numerator < 0) {
      absNumerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      absNumerator = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      absDenominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      absDenominator = static_cast<uint32_T>(denominator);
    }
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if ((!quotientNeedsNegation) && (tempAbsQuotient >= 2147483647U)) {
      quotient = MAX_int32_T;
    } else if (quotientNeedsNegation && (tempAbsQuotient > 2147483647U)) {
      quotient = MIN_int32_T;
    } else if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient = _u32_add__(sp, tempAbsQuotient, 1U);
      }
      quotient = -static_cast<int32_T>(tempAbsQuotient);
    } else {
      quotient = _s32_u32_(sp, tempAbsQuotient);
    }
  }
  return quotient;
}

namespace coder {
int32_T idivide(const emlrtStack *sp, int32_T a, int32_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &cb_emlrtRSI;
  if (b == 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI,
                                  "Coder:toolbox:idivide_divideByZero",
                                  "Coder:toolbox:idivide_divideByZero", 0);
  }
  c_st.site = &eb_emlrtRSI;
  return divv_s32_sat_floor(&c_st, a, b);
}

} // namespace coder

// End of code generation (idivide.cpp)

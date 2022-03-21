//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mpower.cpp
//
// Code generation for function 'mpower'
//

// Include files
#include "mpower.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo v_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/mpower.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    65,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    83,         // lineNo
    5,          // colNo
    "fltpower", // fName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/power.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    188,        // lineNo
    15,         // colNo
    "intpower", // fName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/ops/power.m" // pName
};

// Function Definitions
namespace coder {
int32_T mpower(const emlrtStack *sp, real_T a, int32_T b)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_a;
  int32_T c;
  uint32_T bu;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &v_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_a = a;
  b_st.site = &ab_emlrtRSI;
  if (b < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI,
                                  "Coder:MATLAB:integerPower",
                                  "Coder:MATLAB:integerPower", 0);
  }
  c = 1;
  bu = static_cast<uint32_T>(b);
  int32_T exitg1;
  do {
    exitg1 = 0;
    if ((bu & 1U) != 0U) {
      real_T d;
      d = muDoubleScalarRound(b_a * static_cast<real_T>(c));
      if (d < 2.147483648E+9) {
        if (d >= -2.147483648E+9) {
          c = static_cast<int32_T>(d);
        } else {
          c = MIN_int32_T;
        }
      } else if (d >= 2.147483648E+9) {
        c = MAX_int32_T;
      } else {
        c = 0;
      }
    }
    bu >>= 1U;
    if (static_cast<int32_T>(bu) == 0) {
      exitg1 = 1;
    } else {
      b_a *= b_a;
    }
  } while (exitg1 == 0);
  return c;
}

real_T mpower(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T c;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &v_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &w_emlrtRSI;
  c = muDoubleScalarPower(a, b);
  if ((a < 0.0) && (!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  return c;
}

} // namespace coder

// End of code generation (mpower.cpp)

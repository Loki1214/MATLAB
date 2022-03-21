//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// LongRangeOp.cpp
//
// Code generation for function 'LongRangeOp'
//

// Include files
#include "LongRangeOp.h"
#include "LongRangeOp_data.h"
#include "LongRangeOp_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "exp.h"
#include "idivide.h"
#include "mpower.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    8,                                            // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    9,                                            // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    12,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    13,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    23,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    24,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    25,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    29,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    30,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    41,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    43,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    46,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    47,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    58,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    59,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    60,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    64,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    65,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    70,                                           // lineNo
    "LongRangeOp",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    2,                                          // lineNo
    "transSpin",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/transSpin.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    3,                                          // lineNo
    "transSpin",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/transSpin.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    21,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    2,                                    // lineNo
    "Bit",                                // fcnName
    "/Users/Shoki/Documents/MATLAB/Bit.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    5,                                            // lineNo
    19,                                           // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    6,                                            // lineNo
    23,                                           // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    7,                                            // lineNo
    29,                                           // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    8,                                             // lineNo
    48,                                            // colNo
    "Sector.rep",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    9,                                             // lineNo
    48,                                            // colNo
    "Sector.rep",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo emlrtDCI{
    12,                                            // lineNo
    41,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    23,                                            // lineNo
    50,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    26,                                            // lineNo
    78,                                            // colNo
    "factor",                                      // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    31,                                            // lineNo
    74,                                            // colNo
    "factor",                                      // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    38,                                           // lineNo
    19,                                           // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    39,                                           // lineNo
    23,                                           // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    41,                                            // lineNo
    48,                                            // colNo
    "Sector.rep",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    43,                                            // lineNo
    52,                                            // colNo
    "Sector.rep",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    46,                                            // lineNo
    45,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    58,                                            // lineNo
    54,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    82,                                            // colNo
    "factor",                                      // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    66,                                            // lineNo
    78,                                            // colNo
    "factor",                                      // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    40,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    46,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    2,                                             // lineNo
    25,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    2,                                             // lineNo
    25,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    4                                              // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    2,                                             // lineNo
    39,                                            // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    2,                                             // lineNo
    5,                                             // colNo
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    40,                                            // lineNo
    40,                                            // colNo
    "Sector.per",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    64,                                            // colNo
    "Sector.per",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    82,                                            // colNo
    "Sector.per",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    70,                                            // lineNo
    17,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    42,                                            // lineNo
    44,                                            // colNo
    "Sector.per",                                  // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    66,                                            // lineNo
    84,                                            // colNo
    "loc",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    31,                                            // lineNo
    80,                                            // colNo
    "loc",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    66,                                            // lineNo
    52,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    66,                                            // lineNo
    33,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    31,                                            // lineNo
    48,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    31,                                            // lineNo
    29,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    88,                                            // colNo
    "loc",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    26,                                            // lineNo
    84,                                            // colNo
    "loc",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    56,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    61,                                            // lineNo
    37,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    26,                                            // lineNo
    52,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    26,                                            // lineNo
    33,                                            // colNo
    "res",                                         // aName
    "LongRangeOp",                                 // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m", // pName
    0                                              // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    2,                                            // lineNo
    5,                                            // colNo
    "LongRangeOp",                                // fName
    "/Users/Shoki/Documents/MATLAB/LongRangeOp.m" // pName
};

static emlrtRSInfo db_emlrtRSI{
    41,    // lineNo
    "rem", // fcnName
    "/Applications/MATLAB_R2021a.app/toolbox/eml/eml/+coder/+internal/+scalar/"
    "rem.m" // pathName
};

// Function Declarations
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator);

// Function Definitions
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtCTX)sp);
  } else {
    uint32_T b_denominator;
    uint32_T b_numerator;
    if (numerator < 0) {
      b_numerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      b_numerator = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      b_denominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      b_denominator = static_cast<uint32_T>(denominator);
    }
    b_numerator /= b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(b_numerator);
    } else {
      quotient = static_cast<int32_T>(b_numerator);
    }
  }
  return quotient;
}

void LongRangeOp(const emlrtStack *sp, const coder::array<creal_T, 2U> &loc,
                 const coder::array<real_T, 2U> &factor,
                 const struct0_T *Sector, coder::array<creal_T, 2U> &res)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T ai;
  int32_T b_qY;
  int32_T i;
  int32_T i2;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T itemp;
  int32_T qY;
  int32_T trans1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!(Sector->dim >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Sector->dim, &f_emlrtDCI, (emlrtCTX)sp);
  }
  ai = static_cast<int32_T>(muDoubleScalarFloor(Sector->dim));
  if (Sector->dim != ai) {
    emlrtIntegerCheckR2012b(Sector->dim, &e_emlrtDCI, (emlrtCTX)sp);
  }
  res.set_size(&k_emlrtRTEI, sp, static_cast<int32_T>(Sector->dim),
               res.size(1));
  if (Sector->dim != ai) {
    emlrtIntegerCheckR2012b(Sector->dim, &g_emlrtDCI, (emlrtCTX)sp);
  }
  res.set_size(&k_emlrtRTEI, sp, res.size(0),
               static_cast<int32_T>(Sector->dim));
  if (Sector->dim != ai) {
    emlrtIntegerCheckR2012b(Sector->dim, &h_emlrtDCI, (emlrtCTX)sp);
  }
  itemp = static_cast<int32_T>(Sector->dim) * static_cast<int32_T>(Sector->dim);
  for (i = 0; i < itemp; i++) {
    res[i].re = 0.0;
    res[i].im = 0.0;
  }
  if (muDoubleScalarIsNaN(Sector->momentum)) {
    i = static_cast<int32_T>((Sector->dim - 1.0) + 1.0);
    emlrtForLoopVectorCheckR2021a(
        0.0, 1.0, Sector->dim - 1.0, mxDOUBLE_CLASS,
        static_cast<int32_T>((Sector->dim - 1.0) + 1.0), &emlrtRTEI,
        (emlrtCTX)sp);
    for (int32_T idx{0}; idx < i; idx++) {
      emlrtForLoopVectorCheckR2021a(
          0.0, 1.0, Sector->dim - 1.0, mxDOUBLE_CLASS,
          static_cast<int32_T>((Sector->dim - 1.0) + 1.0), &b_emlrtRTEI,
          (emlrtCTX)sp);
      for (int32_T idy{0}; idy < i; idy++) {
        int32_T i1;
        i1 = static_cast<int32_T>((Sector->N - 1.0) + 1.0);
        emlrtForLoopVectorCheckR2021a(
            0.0, 1.0, Sector->N - 1.0, mxDOUBLE_CLASS,
            static_cast<int32_T>((Sector->N - 1.0) + 1.0), &c_emlrtRTEI,
            (emlrtCTX)sp);
        for (int32_T trans2{0}; trans2 < i1; trans2++) {
          real_T b_itemp;
          real_T factor_re;
          int32_T b;
          int32_T b_res;
          int32_T c_res;
          int32_T diff;
          int32_T pos;
          int32_T q1;
          int32_T r;
          boolean_T exitg1;
          st.site = &emlrtRSI;
          if ((idx + 1 < 1) || (idx + 1 > Sector->rep.size(1))) {
            emlrtDynamicBoundsCheckR2012b(idx + 1, 1, Sector->rep.size(1),
                                          &emlrtBCI, &st);
          }
          b_st.site = &t_emlrtRSI;
          b_itemp = coder::mpower(&b_st, Sector->dloc,
                                  Sector->N - static_cast<real_T>(trans2));
          b_st.site = &u_emlrtRSI;
          factor_re =
              coder::mpower(&b_st, Sector->dloc, static_cast<real_T>(trans2));
          ai = muDoubleScalarRound(b_itemp);
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              i2 = static_cast<int32_T>(ai);
            } else {
              i2 = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            i2 = MAX_int32_T;
          } else {
            i2 = 0;
          }
          if (i2 == b_itemp) {
            if (i2 == 0) {
              b = 0;
            } else {
              b_st.site = &db_emlrtRSI;
              b = Sector->rep[idx] - i2 * div_s32(&b_st, Sector->rep[idx], i2);
            }
          } else {
            ai = muDoubleScalarRound(muDoubleScalarRem(
                static_cast<real_T>(Sector->rep[idx]), b_itemp));
            if (ai < 2.147483648E+9) {
              b = static_cast<int32_T>(ai);
            } else if (ai >= 2.147483648E+9) {
              b = MAX_int32_T;
            } else {
              b = 0;
            }
          }
          ai = muDoubleScalarFloor(static_cast<real_T>(Sector->rep[idx]) /
                                   b_itemp);
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              itemp = static_cast<int32_T>(ai);
            } else {
              itemp = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            itemp = MAX_int32_T;
          } else {
            itemp = 0;
          }
          ai = muDoubleScalarRound(factor_re * static_cast<real_T>(b));
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              q1 = static_cast<int32_T>(ai);
            } else {
              q1 = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            q1 = MAX_int32_T;
          } else {
            q1 = 0;
          }
          if ((itemp < 0) && (q1 < MIN_int32_T - itemp)) {
            qY = MIN_int32_T;
          } else if ((itemp > 0) && (q1 > MAX_int32_T - itemp)) {
            qY = MAX_int32_T;
          } else {
            qY = itemp + q1;
          }
          st.site = &b_emlrtRSI;
          if ((idy + 1 < 1) || (idy + 1 > Sector->rep.size(1))) {
            emlrtDynamicBoundsCheckR2012b(idy + 1, 1, Sector->rep.size(1),
                                          &b_emlrtBCI, &st);
          }
          b_st.site = &t_emlrtRSI;
          b_itemp = coder::mpower(&b_st, Sector->dloc,
                                  Sector->N - static_cast<real_T>(trans2));
          b_st.site = &u_emlrtRSI;
          factor_re =
              coder::mpower(&b_st, Sector->dloc, static_cast<real_T>(trans2));
          ai = muDoubleScalarRound(b_itemp);
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              i2 = static_cast<int32_T>(ai);
            } else {
              i2 = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            i2 = MAX_int32_T;
          } else {
            i2 = 0;
          }
          if (i2 == b_itemp) {
            if (i2 == 0) {
              b = 0;
            } else {
              b_st.site = &db_emlrtRSI;
              b = Sector->rep[idy] - i2 * div_s32(&b_st, Sector->rep[idy], i2);
            }
          } else {
            ai = muDoubleScalarRound(muDoubleScalarRem(
                static_cast<real_T>(Sector->rep[idy]), b_itemp));
            if (ai < 2.147483648E+9) {
              b = static_cast<int32_T>(ai);
            } else if (ai >= 2.147483648E+9) {
              b = MAX_int32_T;
            } else {
              b = 0;
            }
          }
          ai = muDoubleScalarFloor(static_cast<real_T>(Sector->rep[idy]) /
                                   b_itemp);
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              itemp = static_cast<int32_T>(ai);
            } else {
              itemp = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            itemp = MAX_int32_T;
          } else {
            itemp = 0;
          }
          ai = muDoubleScalarRound(factor_re * static_cast<real_T>(b));
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              q1 = static_cast<int32_T>(ai);
            } else {
              q1 = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            q1 = MAX_int32_T;
          } else {
            q1 = 0;
          }
          if ((itemp < 0) && (q1 < MIN_int32_T - itemp)) {
            b_qY = MIN_int32_T;
          } else if ((itemp > 0) && (q1 > MAX_int32_T - itemp)) {
            b_qY = MAX_int32_T;
          } else {
            b_qY = itemp + q1;
          }
          itemp = 0;
          diff = 0;
          ai = static_cast<int32_T>(muDoubleScalarFloor(Sector->N - 1.0));
          if (Sector->N - 1.0 != ai) {
            emlrtIntegerCheckR2012b(Sector->N - 1.0, &emlrtDCI, (emlrtCTX)sp);
          }
          st.site = &c_emlrtRSI;
          if ((1 <= static_cast<int32_T>(Sector->N - 1.0)) &&
              (static_cast<int32_T>(Sector->N - 1.0) > 2147483646)) {
            b_st.site = &x_emlrtRSI;
            coder::check_forloop_overflow_error(&b_st);
          }
          pos = 0;
          exitg1 = false;
          while ((!exitg1) &&
                 (pos <= static_cast<int32_T>(Sector->N - 1.0) - 1)) {
            st.site = &d_emlrtRSI;
            b_itemp = muDoubleScalarRound(Sector->N);
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(b_itemp);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->N) {
              if (i2 == 0) {
                r = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                r = (pos - i2 * div_s32(&b_st, pos + 1, i2)) + 1;
              }
            } else {
              b_itemp = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(pos + 1), Sector->N));
              if (b_itemp < 2.147483648E+9) {
                r = static_cast<int32_T>(b_itemp);
              } else if (b_itemp >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
            }
            b_st.site = &y_emlrtRSI;
            r = coder::idivide(&b_st, qY,
                               coder::mpower(&b_st, Sector->dloc, r));
            b_itemp = muDoubleScalarRound(Sector->dloc);
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(b_itemp);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                b_res = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                b_res = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              b_itemp = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (b_itemp < 2.147483648E+9) {
                b_res = static_cast<int32_T>(b_itemp);
              } else if (b_itemp >= 2.147483648E+9) {
                b_res = MAX_int32_T;
              } else {
                b_res = 0;
              }
            }
            st.site = &d_emlrtRSI;
            b_itemp = muDoubleScalarRound(Sector->N);
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(b_itemp);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->N) {
              if (i2 == 0) {
                r = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                r = (pos - i2 * div_s32(&b_st, pos + 1, i2)) + 1;
              }
            } else {
              b_itemp = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(pos + 1), Sector->N));
              if (b_itemp < 2.147483648E+9) {
                r = static_cast<int32_T>(b_itemp);
              } else if (b_itemp >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
            }
            b_st.site = &y_emlrtRSI;
            r = coder::idivide(&b_st, b_qY,
                               coder::mpower(&b_st, Sector->dloc, r));
            b_itemp = muDoubleScalarRound(Sector->dloc);
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(b_itemp);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                c_res = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                c_res = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              b_itemp = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (b_itemp < 2.147483648E+9) {
                c_res = static_cast<int32_T>(b_itemp);
              } else if (b_itemp >= 2.147483648E+9) {
                c_res = MAX_int32_T;
              } else {
                c_res = 0;
              }
            }
            if (b_res != c_res) {
              itemp++;
              diff = pos + 1;
            }
            if (itemp >= 2) {
              exitg1 = true;
            } else {
              pos++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtCTX)sp);
              }
            }
          }
          switch (itemp) {
          case 0: {
            if (Sector->N - 1.0 != ai) {
              emlrtIntegerCheckR2012b(Sector->N - 1.0, &b_emlrtDCI,
                                      (emlrtCTX)sp);
            }
            b = static_cast<int32_T>(Sector->N - 1.0);
            st.site = &e_emlrtRSI;
            if ((1 <= static_cast<int32_T>(Sector->N - 1.0)) &&
                (static_cast<int32_T>(Sector->N - 1.0) > 2147483646)) {
              b_st.site = &x_emlrtRSI;
              coder::check_forloop_overflow_error(&b_st);
            }
            if (0 <= b - 1) {
              ai = muDoubleScalarRound(Sector->N);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i4 = static_cast<int32_T>(ai);
                } else {
                  i4 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i4 = MAX_int32_T;
              } else {
                i4 = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i5 = static_cast<int32_T>(ai);
                } else {
                  i5 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i5 = MAX_int32_T;
              } else {
                i5 = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i6 = static_cast<int32_T>(ai);
                } else {
                  i6 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i6 = MAX_int32_T;
              } else {
                i6 = 0;
              }
              ai = muDoubleScalarRound(Sector->N);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i7 = static_cast<int32_T>(ai);
                } else {
                  i7 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i7 = MAX_int32_T;
              } else {
                i7 = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i8 = static_cast<int32_T>(ai);
                } else {
                  i8 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i8 = MAX_int32_T;
              } else {
                i8 = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  trans1 = static_cast<int32_T>(ai);
                } else {
                  trans1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                trans1 = MAX_int32_T;
              } else {
                trans1 = 0;
              }
            }
            for (diff = 0; diff < b; diff++) {
              int32_T c_qY;
              int32_T d_qY;
              int32_T e_qY;
              st.site = &f_emlrtRSI;
              if (i4 == Sector->N) {
                if (i4 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = (diff - i4 * div_s32(&b_st, diff + 1, i4)) + 1;
                }
              } else {
                ai = muDoubleScalarRound(muDoubleScalarRem(
                    static_cast<real_T>(diff + 1), Sector->N));
                if (ai < 2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              if (i5 == Sector->dloc) {
                if (i5 == 0) {
                  itemp = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  itemp = r - i5 * div_s32(&b_st, r, i5);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  itemp = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  itemp = MAX_int32_T;
                } else {
                  itemp = 0;
                }
              }
              st.site = &f_emlrtRSI;
              b_st.site = &y_emlrtRSI;
              b_itemp = coder::mpower(&b_st, Sector->dloc,
                                      muDoubleScalarRem(0.0, Sector->N));
              ai = muDoubleScalarFloor(static_cast<real_T>(qY) / b_itemp);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else {
                  r = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
              if (i6 == Sector->dloc) {
                if (i6 == 0) {
                  b_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  b_res = r - i6 * div_s32(&b_st, r, i6);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  b_res = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  b_res = MAX_int32_T;
                } else {
                  b_res = 0;
                }
              }
              st.site = &g_emlrtRSI;
              if (i7 == Sector->N) {
                if (i7 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = (diff - i7 * div_s32(&b_st, diff + 1, i7)) + 1;
                }
              } else {
                ai = muDoubleScalarRound(muDoubleScalarRem(
                    static_cast<real_T>(diff + 1), Sector->N));
                if (ai < 2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, b_qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              if (i8 == Sector->dloc) {
                if (i8 == 0) {
                  pos = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  pos = r - i8 * div_s32(&b_st, r, i8);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  pos = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  pos = MAX_int32_T;
                } else {
                  pos = 0;
                }
              }
              st.site = &g_emlrtRSI;
              b_st.site = &y_emlrtRSI;
              b_itemp = coder::mpower(&b_st, Sector->dloc,
                                      muDoubleScalarRem(0.0, Sector->N));
              ai = muDoubleScalarFloor(static_cast<real_T>(b_qY) / b_itemp);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else {
                  r = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
              if (trans1 == Sector->dloc) {
                if (trans1 == 0) {
                  c_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  c_res = r - trans1 * div_s32(&b_st, r, trans1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  c_res = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  c_res = MAX_int32_T;
                } else {
                  c_res = 0;
                }
              }
              if ((diff + 1 < 1) || (diff + 1 > factor.size(1))) {
                emlrtDynamicBoundsCheckR2012b(diff + 1, 1, factor.size(1),
                                              &c_emlrtBCI, (emlrtCTX)sp);
              }
              ai = muDoubleScalarRound(Sector->dloc *
                                       static_cast<real_T>(itemp));
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(ai);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                c_qY = MIN_int32_T;
              } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                c_qY = MAX_int32_T;
              } else {
                c_qY = b_res + q1;
              }
              if (c_qY > 2147483646) {
                c_qY = MAX_int32_T;
              } else {
                c_qY++;
              }
              if ((c_qY < 1) || (c_qY > loc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(c_qY, 1, loc.size(0), &w_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              b_itemp =
                  muDoubleScalarRound(Sector->dloc * static_cast<real_T>(pos));
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(b_itemp);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                d_qY = MIN_int32_T;
              } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                d_qY = MAX_int32_T;
              } else {
                d_qY = c_res + q1;
              }
              if (d_qY > 2147483646) {
                d_qY = MAX_int32_T;
              } else {
                d_qY++;
              }
              if ((d_qY < 1) || (d_qY > loc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(d_qY, 1, loc.size(1), &w_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(ai);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                e_qY = MIN_int32_T;
              } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                e_qY = MAX_int32_T;
              } else {
                e_qY = b_res + q1;
              }
              if (e_qY > 2147483646) {
                e_qY = MAX_int32_T;
              } else {
                e_qY++;
              }
              if ((e_qY < 1) || (e_qY > loc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(e_qY, 1, loc.size(0), &w_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(b_itemp);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                r = MIN_int32_T;
              } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                r = MAX_int32_T;
              } else {
                r = c_res + q1;
              }
              if (r > 2147483646) {
                r = MAX_int32_T;
              } else {
                r++;
              }
              if ((r < 1) || (r > loc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(r, 1, loc.size(1), &w_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &bb_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &bb_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &ab_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &ab_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              res[idx + res.size(0) * idy].re =
                  res[idx + res.size(0) * idy].re +
                  factor[diff] * loc[(c_qY + loc.size(0) * (d_qY - 1)) - 1].re;
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &ab_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &ab_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &bb_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &bb_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              res[idx + res.size(0) * idy].im =
                  res[idx + res.size(0) * idy].im +
                  factor[diff] * loc[(e_qY + loc.size(0) * (r - 1)) - 1].im;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtCTX)sp);
              }
            }
          } break;
          case 1: {
            int32_T c_qY;
            int32_T d_qY;
            st.site = &h_emlrtRSI;
            ai = muDoubleScalarRound(Sector->N);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->N) {
              if (i2 == 0) {
                r = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                r = diff - i2 * div_s32(&b_st, diff, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(diff), Sector->N));
              if (ai < 2.147483648E+9) {
                r = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
            }
            b_st.site = &y_emlrtRSI;
            r = coder::idivide(&b_st, qY,
                               coder::mpower(&b_st, Sector->dloc, r));
            ai = muDoubleScalarRound(Sector->dloc);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                b = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                b = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (ai < 2.147483648E+9) {
                b = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                b = MAX_int32_T;
              } else {
                b = 0;
              }
            }
            st.site = &h_emlrtRSI;
            b_st.site = &y_emlrtRSI;
            b_itemp = coder::mpower(&b_st, Sector->dloc,
                                    muDoubleScalarRem(0.0, Sector->N));
            ai = muDoubleScalarFloor(static_cast<real_T>(qY) / b_itemp);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                r = static_cast<int32_T>(ai);
              } else {
                r = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              r = MAX_int32_T;
            } else {
              r = 0;
            }
            ai = muDoubleScalarRound(Sector->dloc);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                b_res = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                b_res = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (ai < 2.147483648E+9) {
                b_res = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                b_res = MAX_int32_T;
              } else {
                b_res = 0;
              }
            }
            st.site = &i_emlrtRSI;
            ai = muDoubleScalarRound(Sector->N);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->N) {
              if (i2 == 0) {
                r = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                r = diff - i2 * div_s32(&b_st, diff, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(diff), Sector->N));
              if (ai < 2.147483648E+9) {
                r = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
            }
            b_st.site = &y_emlrtRSI;
            r = coder::idivide(&b_st, b_qY,
                               coder::mpower(&b_st, Sector->dloc, r));
            ai = muDoubleScalarRound(Sector->dloc);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                itemp = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                itemp = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (ai < 2.147483648E+9) {
                itemp = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                itemp = MAX_int32_T;
              } else {
                itemp = 0;
              }
            }
            st.site = &i_emlrtRSI;
            b_st.site = &y_emlrtRSI;
            b_itemp = coder::mpower(&b_st, Sector->dloc,
                                    muDoubleScalarRem(0.0, Sector->N));
            ai = muDoubleScalarFloor(static_cast<real_T>(b_qY) / b_itemp);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                r = static_cast<int32_T>(ai);
              } else {
                r = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              r = MAX_int32_T;
            } else {
              r = 0;
            }
            ai = muDoubleScalarRound(Sector->dloc);
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i2 = static_cast<int32_T>(ai);
              } else {
                i2 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i2 = MAX_int32_T;
            } else {
              i2 = 0;
            }
            if (i2 == Sector->dloc) {
              if (i2 == 0) {
                c_res = 0;
              } else {
                b_st.site = &db_emlrtRSI;
                c_res = r - i2 * div_s32(&b_st, r, i2);
              }
            } else {
              ai = muDoubleScalarRound(
                  muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
              if (ai < 2.147483648E+9) {
                c_res = static_cast<int32_T>(ai);
              } else if (ai >= 2.147483648E+9) {
                c_res = MAX_int32_T;
              } else {
                c_res = 0;
              }
            }
            if ((diff < 1) || (diff > factor.size(1))) {
              emlrtDynamicBoundsCheckR2012b(diff, 1, factor.size(1),
                                            &d_emlrtBCI, (emlrtCTX)sp);
            }
            ai = muDoubleScalarRound(Sector->dloc * static_cast<real_T>(b));
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                q1 = static_cast<int32_T>(ai);
              } else {
                q1 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              q1 = MAX_int32_T;
            } else {
              q1 = 0;
            }
            if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
              qY = MIN_int32_T;
            } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
              qY = MAX_int32_T;
            } else {
              qY = b_res + q1;
            }
            if (qY > 2147483646) {
              qY = MAX_int32_T;
            } else {
              qY++;
            }
            if ((qY < 1) || (qY > loc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(qY, 1, loc.size(0), &q_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            b_itemp =
                muDoubleScalarRound(Sector->dloc * static_cast<real_T>(itemp));
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                q1 = static_cast<int32_T>(b_itemp);
              } else {
                q1 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              q1 = MAX_int32_T;
            } else {
              q1 = 0;
            }
            if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
              b_qY = MIN_int32_T;
            } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
              b_qY = MAX_int32_T;
            } else {
              b_qY = c_res + q1;
            }
            if (b_qY > 2147483646) {
              b_qY = MAX_int32_T;
            } else {
              b_qY++;
            }
            if ((b_qY < 1) || (b_qY > loc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(b_qY, 1, loc.size(1), &q_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                q1 = static_cast<int32_T>(ai);
              } else {
                q1 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              q1 = MAX_int32_T;
            } else {
              q1 = 0;
            }
            if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
              c_qY = MIN_int32_T;
            } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
              c_qY = MAX_int32_T;
            } else {
              c_qY = b_res + q1;
            }
            if (c_qY > 2147483646) {
              c_qY = MAX_int32_T;
            } else {
              c_qY++;
            }
            if ((c_qY < 1) || (c_qY > loc.size(0))) {
              emlrtDynamicBoundsCheckR2012b(c_qY, 1, loc.size(0), &q_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if (b_itemp < 2.147483648E+9) {
              if (b_itemp >= -2.147483648E+9) {
                q1 = static_cast<int32_T>(b_itemp);
              } else {
                q1 = MIN_int32_T;
              }
            } else if (b_itemp >= 2.147483648E+9) {
              q1 = MAX_int32_T;
            } else {
              q1 = 0;
            }
            if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
              d_qY = MIN_int32_T;
            } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
              d_qY = MAX_int32_T;
            } else {
              d_qY = c_res + q1;
            }
            if (d_qY > 2147483646) {
              d_qY = MAX_int32_T;
            } else {
              d_qY++;
            }
            if ((d_qY < 1) || (d_qY > loc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(d_qY, 1, loc.size(1), &q_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idx + 1U) < 1) ||
                (static_cast<int32_T>(idx + 1U) > res.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                            res.size(0), &u_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idy + 1U) < 1) ||
                (static_cast<int32_T>(idy + 1U) > res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                            res.size(1), &u_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idx + 1U) < 1) ||
                (static_cast<int32_T>(idx + 1U) > res.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                            res.size(0), &t_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idy + 1U) < 1) ||
                (static_cast<int32_T>(idy + 1U) > res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                            res.size(1), &t_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            res[idx + res.size(0) * idy].re =
                res[idx + res.size(0) * idy].re +
                factor[diff - 1] * loc[(qY + loc.size(0) * (b_qY - 1)) - 1].re;
            if ((static_cast<int32_T>(idx + 1U) < 1) ||
                (static_cast<int32_T>(idx + 1U) > res.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                            res.size(0), &t_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idy + 1U) < 1) ||
                (static_cast<int32_T>(idy + 1U) > res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                            res.size(1), &t_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idx + 1U) < 1) ||
                (static_cast<int32_T>(idx + 1U) > res.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                            res.size(0), &u_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            if ((static_cast<int32_T>(idy + 1U) < 1) ||
                (static_cast<int32_T>(idy + 1U) > res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                            res.size(1), &u_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            res[idx + res.size(0) * idy].im =
                res[idx + res.size(0) * idy].im +
                factor[diff - 1] *
                    loc[(c_qY + loc.size(0) * (d_qY - 1)) - 1].im;
          } break;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
        //                  res(idy+1,idx+1) = conj(res(idx+1,idy+1));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } else {
    i = static_cast<int32_T>((Sector->dim - 1.0) + 1.0);
    emlrtForLoopVectorCheckR2021a(
        0.0, 1.0, Sector->dim - 1.0, mxDOUBLE_CLASS,
        static_cast<int32_T>((Sector->dim - 1.0) + 1.0), &d_emlrtRTEI,
        (emlrtCTX)sp);
    for (int32_T idx{0}; idx < i; idx++) {
      emlrtForLoopVectorCheckR2021a(
          0.0, 1.0, Sector->dim - 1.0, mxDOUBLE_CLASS,
          static_cast<int32_T>((Sector->dim - 1.0) + 1.0), &e_emlrtRTEI,
          (emlrtCTX)sp);
      if (0 <= i - 1) {
        itemp = Sector->per[idx];
        if (itemp < -2147483647) {
          qY = MIN_int32_T;
        } else {
          qY = itemp - 1;
        }
      }
      for (int32_T idy{0}; idy < i; idy++) {
        int64_T i3;
        real_T b_itemp;
        real_T factor_re;
        real_T re;
        if ((static_cast<int32_T>(idx + 1U) < 1) ||
            (static_cast<int32_T>(idx + 1U) > Sector->per.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                        Sector->per.size(1), &k_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (0 <= qY) {
          itemp = Sector->per[idy];
          if (itemp < -2147483647) {
            b_qY = MIN_int32_T;
          } else {
            b_qY = itemp - 1;
          }
        }
        for (trans1 = 0; trans1 <= qY; trans1++) {
          int32_T c_qY;
          int32_T i1;
          int32_T r;
          st.site = &j_emlrtRSI;
          if ((idx + 1 < 1) || (idx + 1 > Sector->rep.size(1))) {
            emlrtDynamicBoundsCheckR2012b(idx + 1, 1, Sector->rep.size(1),
                                          &e_emlrtBCI, &st);
          }
          ai = muDoubleScalarRound(Sector->N - static_cast<real_T>(trans1));
          if (ai < 2.147483648E+9) {
            if (ai >= -2.147483648E+9) {
              i1 = static_cast<int32_T>(ai);
            } else {
              i1 = MIN_int32_T;
            }
          } else if (ai >= 2.147483648E+9) {
            i1 = MAX_int32_T;
          } else {
            i1 = 0;
          }
          b_st.site = &t_emlrtRSI;
          itemp = coder::mpower(&b_st, Sector->dloc, i1);
          if (itemp == 0) {
            r = 0;
          } else {
            b_st.site = &db_emlrtRSI;
            r = Sector->rep[idx] -
                itemp * div_s32(&b_st, Sector->rep[idx], itemp);
          }
          b_st.site = &u_emlrtRSI;
          itemp = coder::idivide(&b_st, Sector->rep[idx], itemp);
          b_st.site = &u_emlrtRSI;
          i3 =
              static_cast<int64_T>(coder::mpower(&b_st, Sector->dloc, trans1)) *
              r;
          if (i3 > 2147483647L) {
            i3 = 2147483647L;
          } else if (i3 < -2147483648L) {
            i3 = -2147483648L;
          }
          if ((itemp < 0) && (static_cast<int32_T>(i3) < MIN_int32_T - itemp)) {
            c_qY = MIN_int32_T;
          } else if ((itemp > 0) &&
                     (static_cast<int32_T>(i3) > MAX_int32_T - itemp)) {
            c_qY = MAX_int32_T;
          } else {
            c_qY = itemp + static_cast<int32_T>(i3);
          }
          if ((static_cast<int32_T>(idy + 1U) < 1) ||
              (static_cast<int32_T>(idy + 1U) > Sector->per.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                          Sector->per.size(1), &o_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          for (int32_T trans2{0}; trans2 <= b_qY; trans2++) {
            real_T theta;
            int32_T b_res;
            int32_T c_res;
            int32_T d_qY;
            int32_T diff;
            int32_T pos;
            boolean_T exitg1;
            st.site = &k_emlrtRSI;
            if ((idy + 1 < 1) || (idy + 1 > Sector->rep.size(1))) {
              emlrtDynamicBoundsCheckR2012b(idy + 1, 1, Sector->rep.size(1),
                                            &f_emlrtBCI, &st);
            }
            ai = muDoubleScalarRound(Sector->N - static_cast<real_T>(trans2));
            if (ai < 2.147483648E+9) {
              if (ai >= -2.147483648E+9) {
                i1 = static_cast<int32_T>(ai);
              } else {
                i1 = MIN_int32_T;
              }
            } else if (ai >= 2.147483648E+9) {
              i1 = MAX_int32_T;
            } else {
              i1 = 0;
            }
            b_st.site = &t_emlrtRSI;
            itemp = coder::mpower(&b_st, Sector->dloc, i1);
            if (itemp == 0) {
              r = 0;
            } else {
              b_st.site = &db_emlrtRSI;
              r = Sector->rep[idy] -
                  itemp * div_s32(&b_st, Sector->rep[idy], itemp);
            }
            b_st.site = &u_emlrtRSI;
            itemp = coder::idivide(&b_st, Sector->rep[idy], itemp);
            b_st.site = &u_emlrtRSI;
            i3 = static_cast<int64_T>(
                     coder::mpower(&b_st, Sector->dloc, trans2)) *
                 r;
            if (i3 > 2147483647L) {
              i3 = 2147483647L;
            } else if (i3 < -2147483648L) {
              i3 = -2147483648L;
            }
            if ((itemp < 0) &&
                (static_cast<int32_T>(i3) < MIN_int32_T - itemp)) {
              d_qY = MIN_int32_T;
            } else if ((itemp > 0) &&
                       (static_cast<int32_T>(i3) > MAX_int32_T - itemp)) {
              d_qY = MAX_int32_T;
            } else {
              d_qY = itemp + static_cast<int32_T>(i3);
            }
            theta = 6.2831853071795862 * Sector->momentum *
                    static_cast<real_T>(trans2 - trans1) / Sector->N;
            itemp = 0;
            diff = 0;
            ai = static_cast<int32_T>(muDoubleScalarFloor(Sector->N - 1.0));
            if (Sector->N - 1.0 != ai) {
              emlrtIntegerCheckR2012b(Sector->N - 1.0, &c_emlrtDCI,
                                      (emlrtCTX)sp);
            }
            st.site = &l_emlrtRSI;
            if ((1 <= static_cast<int32_T>(Sector->N - 1.0)) &&
                (static_cast<int32_T>(Sector->N - 1.0) > 2147483646)) {
              b_st.site = &x_emlrtRSI;
              coder::check_forloop_overflow_error(&b_st);
            }
            pos = 0;
            exitg1 = false;
            while ((!exitg1) &&
                   (pos <= static_cast<int32_T>(Sector->N - 1.0) - 1)) {
              st.site = &m_emlrtRSI;
              b_itemp = muDoubleScalarRound(Sector->N);
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(b_itemp);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->N) {
                if (i1 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = (pos - i1 * div_s32(&b_st, pos + 1, i1)) + 1;
                }
              } else {
                factor_re = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(pos + 1), Sector->N));
                if (factor_re < 2.147483648E+9) {
                  r = static_cast<int32_T>(factor_re);
                } else if (factor_re >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, c_qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              factor_re = muDoubleScalarRound(Sector->dloc);
              if (factor_re < 2.147483648E+9) {
                if (factor_re >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(factor_re);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (factor_re >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  b_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  b_res = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                re = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (re < 2.147483648E+9) {
                  b_res = static_cast<int32_T>(re);
                } else if (re >= 2.147483648E+9) {
                  b_res = MAX_int32_T;
                } else {
                  b_res = 0;
                }
              }
              st.site = &m_emlrtRSI;
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(b_itemp);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->N) {
                if (i1 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = (pos - i1 * div_s32(&b_st, pos + 1, i1)) + 1;
                }
              } else {
                b_itemp = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(pos + 1), Sector->N));
                if (b_itemp < 2.147483648E+9) {
                  r = static_cast<int32_T>(b_itemp);
                } else if (b_itemp >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, d_qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              if (factor_re < 2.147483648E+9) {
                if (factor_re >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(factor_re);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (factor_re >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  c_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  c_res = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                b_itemp = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (b_itemp < 2.147483648E+9) {
                  c_res = static_cast<int32_T>(b_itemp);
                } else if (b_itemp >= 2.147483648E+9) {
                  c_res = MAX_int32_T;
                } else {
                  c_res = 0;
                }
              }
              if (b_res != c_res) {
                itemp++;
                diff = pos + 1;
              }
              if (itemp >= 2) {
                exitg1 = true;
              } else {
                pos++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
            //                      [idx, idy,Id1, Id2, Ndiff, diff]
            switch (itemp) {
            case 0: {
              int32_T b;
              if (Sector->N - 1.0 != ai) {
                emlrtIntegerCheckR2012b(Sector->N - 1.0, &d_emlrtDCI,
                                        (emlrtCTX)sp);
              }
              b = static_cast<int32_T>(Sector->N - 1.0);
              st.site = &n_emlrtRSI;
              if ((1 <= static_cast<int32_T>(Sector->N - 1.0)) &&
                  (static_cast<int32_T>(Sector->N - 1.0) > 2147483646)) {
                b_st.site = &x_emlrtRSI;
                coder::check_forloop_overflow_error(&b_st);
              }
              if (0 <= b - 1) {
                ai = muDoubleScalarRound(Sector->N);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i2 = static_cast<int32_T>(ai);
                  } else {
                    i2 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i2 = MAX_int32_T;
                } else {
                  i2 = 0;
                }
                ai = muDoubleScalarRound(Sector->dloc);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i4 = static_cast<int32_T>(ai);
                  } else {
                    i4 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i4 = MAX_int32_T;
                } else {
                  i4 = 0;
                }
                ai = muDoubleScalarRound(Sector->dloc);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i5 = static_cast<int32_T>(ai);
                  } else {
                    i5 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i5 = MAX_int32_T;
                } else {
                  i5 = 0;
                }
                ai = muDoubleScalarRound(Sector->N);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i6 = static_cast<int32_T>(ai);
                  } else {
                    i6 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i6 = MAX_int32_T;
                } else {
                  i6 = 0;
                }
                ai = muDoubleScalarRound(Sector->dloc);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i7 = static_cast<int32_T>(ai);
                  } else {
                    i7 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i7 = MAX_int32_T;
                } else {
                  i7 = 0;
                }
                ai = muDoubleScalarRound(Sector->dloc);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    i8 = static_cast<int32_T>(ai);
                  } else {
                    i8 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  i8 = MAX_int32_T;
                } else {
                  i8 = 0;
                }
              }
              for (diff = 0; diff < b; diff++) {
                int32_T e_qY;
                int32_T q1;
                st.site = &o_emlrtRSI;
                if (i2 == Sector->N) {
                  if (i2 == 0) {
                    r = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    r = (diff - i2 * div_s32(&b_st, diff + 1, i2)) + 1;
                  }
                } else {
                  ai = muDoubleScalarRound(muDoubleScalarRem(
                      static_cast<real_T>(diff + 1), Sector->N));
                  if (ai < 2.147483648E+9) {
                    r = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    r = MAX_int32_T;
                  } else {
                    r = 0;
                  }
                }
                b_st.site = &y_emlrtRSI;
                r = coder::idivide(&b_st, c_qY,
                                   coder::mpower(&b_st, Sector->dloc, r));
                if (i4 == Sector->dloc) {
                  if (i4 == 0) {
                    itemp = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    itemp = r - i4 * div_s32(&b_st, r, i4);
                  }
                } else {
                  ai = muDoubleScalarRound(
                      muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                  if (ai < 2.147483648E+9) {
                    itemp = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    itemp = MAX_int32_T;
                  } else {
                    itemp = 0;
                  }
                }
                st.site = &o_emlrtRSI;
                b_st.site = &y_emlrtRSI;
                b_itemp = coder::mpower(&b_st, Sector->dloc,
                                        muDoubleScalarRem(0.0, Sector->N));
                ai = muDoubleScalarFloor(static_cast<real_T>(c_qY) / b_itemp);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    r = static_cast<int32_T>(ai);
                  } else {
                    r = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
                if (i5 == Sector->dloc) {
                  if (i5 == 0) {
                    b_res = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    b_res = r - i5 * div_s32(&b_st, r, i5);
                  }
                } else {
                  ai = muDoubleScalarRound(
                      muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                  if (ai < 2.147483648E+9) {
                    b_res = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    b_res = MAX_int32_T;
                  } else {
                    b_res = 0;
                  }
                }
                st.site = &p_emlrtRSI;
                if (i6 == Sector->N) {
                  if (i6 == 0) {
                    r = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    r = (diff - i6 * div_s32(&b_st, diff + 1, i6)) + 1;
                  }
                } else {
                  ai = muDoubleScalarRound(muDoubleScalarRem(
                      static_cast<real_T>(diff + 1), Sector->N));
                  if (ai < 2.147483648E+9) {
                    r = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    r = MAX_int32_T;
                  } else {
                    r = 0;
                  }
                }
                b_st.site = &y_emlrtRSI;
                r = coder::idivide(&b_st, d_qY,
                                   coder::mpower(&b_st, Sector->dloc, r));
                if (i7 == Sector->dloc) {
                  if (i7 == 0) {
                    pos = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    pos = r - i7 * div_s32(&b_st, r, i7);
                  }
                } else {
                  ai = muDoubleScalarRound(
                      muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                  if (ai < 2.147483648E+9) {
                    pos = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    pos = MAX_int32_T;
                  } else {
                    pos = 0;
                  }
                }
                st.site = &p_emlrtRSI;
                b_st.site = &y_emlrtRSI;
                b_itemp = coder::mpower(&b_st, Sector->dloc,
                                        muDoubleScalarRem(0.0, Sector->N));
                ai = muDoubleScalarFloor(static_cast<real_T>(d_qY) / b_itemp);
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    r = static_cast<int32_T>(ai);
                  } else {
                    r = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
                if (i8 == Sector->dloc) {
                  if (i8 == 0) {
                    c_res = 0;
                  } else {
                    b_st.site = &db_emlrtRSI;
                    c_res = r - i8 * div_s32(&b_st, r, i8);
                  }
                } else {
                  ai = muDoubleScalarRound(
                      muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                  if (ai < 2.147483648E+9) {
                    c_res = static_cast<int32_T>(ai);
                  } else if (ai >= 2.147483648E+9) {
                    c_res = MAX_int32_T;
                  } else {
                    c_res = 0;
                  }
                }
                if ((diff + 1 < 1) || (diff + 1 > factor.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(diff + 1, 1, factor.size(1),
                                                &g_emlrtBCI, (emlrtCTX)sp);
                }
                ai = muDoubleScalarRound(Sector->dloc *
                                         static_cast<real_T>(itemp));
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    q1 = static_cast<int32_T>(ai);
                  } else {
                    q1 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  q1 = MAX_int32_T;
                } else {
                  q1 = 0;
                }
                if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                  e_qY = MIN_int32_T;
                } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                  e_qY = MAX_int32_T;
                } else {
                  e_qY = b_res + q1;
                }
                if (e_qY > 2147483646) {
                  e_qY = MAX_int32_T;
                } else {
                  e_qY++;
                }
                if ((e_qY < 1) || (e_qY > loc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(e_qY, 1, loc.size(0),
                                                &v_emlrtBCI, (emlrtCTX)sp);
                }
                b_itemp = muDoubleScalarRound(Sector->dloc *
                                              static_cast<real_T>(pos));
                if (b_itemp < 2.147483648E+9) {
                  if (b_itemp >= -2.147483648E+9) {
                    q1 = static_cast<int32_T>(b_itemp);
                  } else {
                    q1 = MIN_int32_T;
                  }
                } else if (b_itemp >= 2.147483648E+9) {
                  q1 = MAX_int32_T;
                } else {
                  q1 = 0;
                }
                if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                  r = MIN_int32_T;
                } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                  r = MAX_int32_T;
                } else {
                  r = c_res + q1;
                }
                if (r > 2147483646) {
                  r = MAX_int32_T;
                } else {
                  r++;
                }
                if ((r < 1) || (r > loc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(r, 1, loc.size(1), &v_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if (ai < 2.147483648E+9) {
                  if (ai >= -2.147483648E+9) {
                    q1 = static_cast<int32_T>(ai);
                  } else {
                    q1 = MIN_int32_T;
                  }
                } else if (ai >= 2.147483648E+9) {
                  q1 = MAX_int32_T;
                } else {
                  q1 = 0;
                }
                if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                  pos = MIN_int32_T;
                } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                  pos = MAX_int32_T;
                } else {
                  pos = b_res + q1;
                }
                if (pos > 2147483646) {
                  pos = MAX_int32_T;
                } else {
                  pos++;
                }
                if ((pos < 1) || (pos > loc.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(pos, 1, loc.size(0),
                                                &v_emlrtBCI, (emlrtCTX)sp);
                }
                if (b_itemp < 2.147483648E+9) {
                  if (b_itemp >= -2.147483648E+9) {
                    q1 = static_cast<int32_T>(b_itemp);
                  } else {
                    q1 = MIN_int32_T;
                  }
                } else if (b_itemp >= 2.147483648E+9) {
                  q1 = MAX_int32_T;
                } else {
                  q1 = 0;
                }
                if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                  itemp = MIN_int32_T;
                } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                  itemp = MAX_int32_T;
                } else {
                  itemp = c_res + q1;
                }
                if (itemp > 2147483646) {
                  itemp = MAX_int32_T;
                } else {
                  itemp++;
                }
                if ((itemp < 1) || (itemp > loc.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(itemp, 1, loc.size(1),
                                                &v_emlrtBCI, (emlrtCTX)sp);
                }
                dc.re = theta * 0.0;
                dc.im = theta;
                coder::b_exp(&dc);
                factor_re =
                    factor[diff] * loc[(e_qY + loc.size(0) * (r - 1)) - 1].re;
                b_itemp = factor[diff] *
                          loc[(pos + loc.size(0) * (itemp - 1)) - 1].im;
                if ((static_cast<int32_T>(idx + 1U) < 1) ||
                    (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U),
                                                1, res.size(0), &y_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idy + 1U) < 1) ||
                    (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U),
                                                1, res.size(1), &y_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idx + 1U) < 1) ||
                    (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U),
                                                1, res.size(0), &x_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idy + 1U) < 1) ||
                    (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U),
                                                1, res.size(1), &x_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                res[idx + res.size(0) * idy].re =
                    res[idx + res.size(0) * idy].re +
                    (factor_re * dc.re - b_itemp * dc.im);
                if ((static_cast<int32_T>(idx + 1U) < 1) ||
                    (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U),
                                                1, res.size(0), &x_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idy + 1U) < 1) ||
                    (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U),
                                                1, res.size(1), &x_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idx + 1U) < 1) ||
                    (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U),
                                                1, res.size(0), &y_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                if ((static_cast<int32_T>(idy + 1U) < 1) ||
                    (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U),
                                                1, res.size(1), &y_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                res[idx + res.size(0) * idy].im =
                    res[idx + res.size(0) * idy].im +
                    (factor_re * dc.im + b_itemp * dc.re);
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            } break;
            case 1: {
              int32_T b;
              int32_T e_qY;
              int32_T q1;
              st.site = &q_emlrtRSI;
              ai = muDoubleScalarRound(Sector->N);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->N) {
                if (i1 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = diff - i1 * div_s32(&b_st, diff, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(diff), Sector->N));
                if (ai < 2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, c_qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  b = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  b = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  b = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  b = MAX_int32_T;
                } else {
                  b = 0;
                }
              }
              st.site = &q_emlrtRSI;
              b_st.site = &y_emlrtRSI;
              b_itemp = coder::mpower(&b_st, Sector->dloc,
                                      muDoubleScalarRem(0.0, Sector->N));
              ai = muDoubleScalarFloor(static_cast<real_T>(c_qY) / b_itemp);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else {
                  r = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  b_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  b_res = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  b_res = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  b_res = MAX_int32_T;
                } else {
                  b_res = 0;
                }
              }
              st.site = &r_emlrtRSI;
              ai = muDoubleScalarRound(Sector->N);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->N) {
                if (i1 == 0) {
                  r = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  r = diff - i1 * div_s32(&b_st, diff, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(diff), Sector->N));
                if (ai < 2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  r = MAX_int32_T;
                } else {
                  r = 0;
                }
              }
              b_st.site = &y_emlrtRSI;
              r = coder::idivide(&b_st, d_qY,
                                 coder::mpower(&b_st, Sector->dloc, r));
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  itemp = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  itemp = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  itemp = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  itemp = MAX_int32_T;
                } else {
                  itemp = 0;
                }
              }
              st.site = &r_emlrtRSI;
              b_st.site = &y_emlrtRSI;
              b_itemp = coder::mpower(&b_st, Sector->dloc,
                                      muDoubleScalarRem(0.0, Sector->N));
              ai = muDoubleScalarFloor(static_cast<real_T>(d_qY) / b_itemp);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  r = static_cast<int32_T>(ai);
                } else {
                  r = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                r = MAX_int32_T;
              } else {
                r = 0;
              }
              ai = muDoubleScalarRound(Sector->dloc);
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  i1 = static_cast<int32_T>(ai);
                } else {
                  i1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                i1 = MAX_int32_T;
              } else {
                i1 = 0;
              }
              if (i1 == Sector->dloc) {
                if (i1 == 0) {
                  c_res = 0;
                } else {
                  b_st.site = &db_emlrtRSI;
                  c_res = r - i1 * div_s32(&b_st, r, i1);
                }
              } else {
                ai = muDoubleScalarRound(
                    muDoubleScalarRem(static_cast<real_T>(r), Sector->dloc));
                if (ai < 2.147483648E+9) {
                  c_res = static_cast<int32_T>(ai);
                } else if (ai >= 2.147483648E+9) {
                  c_res = MAX_int32_T;
                } else {
                  c_res = 0;
                }
              }
              if ((diff < 1) || (diff > factor.size(1))) {
                emlrtDynamicBoundsCheckR2012b(diff, 1, factor.size(1),
                                              &h_emlrtBCI, (emlrtCTX)sp);
              }
              ai = muDoubleScalarRound(Sector->dloc * static_cast<real_T>(b));
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(ai);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                d_qY = MIN_int32_T;
              } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                d_qY = MAX_int32_T;
              } else {
                d_qY = b_res + q1;
              }
              if (d_qY > 2147483646) {
                d_qY = MAX_int32_T;
              } else {
                d_qY++;
              }
              if ((d_qY < 1) || (d_qY > loc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(d_qY, 1, loc.size(0), &p_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              b_itemp = muDoubleScalarRound(Sector->dloc *
                                            static_cast<real_T>(itemp));
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(b_itemp);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                e_qY = MIN_int32_T;
              } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                e_qY = MAX_int32_T;
              } else {
                e_qY = c_res + q1;
              }
              if (e_qY > 2147483646) {
                e_qY = MAX_int32_T;
              } else {
                e_qY++;
              }
              if ((e_qY < 1) || (e_qY > loc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(e_qY, 1, loc.size(1), &p_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if (ai < 2.147483648E+9) {
                if (ai >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(ai);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (ai >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((b_res < 0) && (q1 < MIN_int32_T - b_res)) {
                r = MIN_int32_T;
              } else if ((b_res > 0) && (q1 > MAX_int32_T - b_res)) {
                r = MAX_int32_T;
              } else {
                r = b_res + q1;
              }
              if (r > 2147483646) {
                r = MAX_int32_T;
              } else {
                r++;
              }
              if ((r < 1) || (r > loc.size(0))) {
                emlrtDynamicBoundsCheckR2012b(r, 1, loc.size(0), &p_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if (b_itemp < 2.147483648E+9) {
                if (b_itemp >= -2.147483648E+9) {
                  q1 = static_cast<int32_T>(b_itemp);
                } else {
                  q1 = MIN_int32_T;
                }
              } else if (b_itemp >= 2.147483648E+9) {
                q1 = MAX_int32_T;
              } else {
                q1 = 0;
              }
              if ((c_res < 0) && (q1 < MIN_int32_T - c_res)) {
                pos = MIN_int32_T;
              } else if ((c_res > 0) && (q1 > MAX_int32_T - c_res)) {
                pos = MAX_int32_T;
              } else {
                pos = c_res + q1;
              }
              if (pos > 2147483646) {
                pos = MAX_int32_T;
              } else {
                pos++;
              }
              if ((pos < 1) || (pos > loc.size(1))) {
                emlrtDynamicBoundsCheckR2012b(pos, 1, loc.size(1), &p_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              dc.re = theta * 0.0;
              dc.im = theta;
              coder::b_exp(&dc);
              b_itemp = factor[diff - 1];
              factor_re =
                  b_itemp * loc[(d_qY + loc.size(0) * (e_qY - 1)) - 1].re;
              b_itemp *= loc[(r + loc.size(0) * (pos - 1)) - 1].im;
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &s_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &s_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &r_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &r_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              res[idx + res.size(0) * idy].re =
                  res[idx + res.size(0) * idy].re +
                  (factor_re * dc.re - b_itemp * dc.im);
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &r_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &r_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idx + 1U) < 1) ||
                  (static_cast<int32_T>(idx + 1U) > res.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                              res.size(0), &s_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              if ((static_cast<int32_T>(idy + 1U) < 1) ||
                  (static_cast<int32_T>(idy + 1U) > res.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                              res.size(1), &s_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              res[idx + res.size(0) * idy].im =
                  res[idx + res.size(0) * idy].im +
                  (factor_re * dc.im + b_itemp * dc.re);
            } break;
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtCTX)sp);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
        if ((idx + 1 < 1) || (idx + 1 > res.size(0))) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, res.size(0), &i_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((idy + 1 < 1) || (idy + 1 > res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(idy + 1, 1, res.size(1), &j_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(idx + 1U) < 1) ||
            (static_cast<int32_T>(idx + 1U) > Sector->per.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                        Sector->per.size(1), &l_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(idy + 1U) < 1) ||
            (static_cast<int32_T>(idy + 1U) > Sector->per.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                        Sector->per.size(1), &m_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i3 = static_cast<int64_T>(Sector->per[idx]) * Sector->per[idy];
        if (i3 > 2147483647L) {
          i3 = 2147483647L;
        } else if (i3 < -2147483648L) {
          i3 = -2147483648L;
        }
        st.site = &s_emlrtRSI;
        if (static_cast<int32_T>(i3) < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        factor_re =
            muDoubleScalarSqrt(static_cast<real_T>(static_cast<int32_T>(i3)));
        b_itemp = res[idx + res.size(0) * idy].re;
        ai = res[idx + res.size(0) * idy].im;
        if (ai == 0.0) {
          re = b_itemp / factor_re;
          b_itemp = 0.0;
        } else if (b_itemp == 0.0) {
          re = 0.0;
          b_itemp = ai / factor_re;
        } else {
          re = b_itemp / factor_re;
          b_itemp = ai / factor_re;
        }
        if ((static_cast<int32_T>(idx + 1U) < 1) ||
            (static_cast<int32_T>(idx + 1U) > res.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                        res.size(0), &n_emlrtBCI, (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(idy + 1U) < 1) ||
            (static_cast<int32_T>(idy + 1U) > res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                        res.size(1), &n_emlrtBCI, (emlrtCTX)sp);
        }
        res[idx + res.size(0) * idy].re = re;
        if ((static_cast<int32_T>(idx + 1U) < 1) ||
            (static_cast<int32_T>(idx + 1U) > res.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idx + 1U), 1,
                                        res.size(0), &n_emlrtBCI, (emlrtCTX)sp);
        }
        if ((static_cast<int32_T>(idy + 1U) < 1) ||
            (static_cast<int32_T>(idy + 1U) > res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(idy + 1U), 1,
                                        res.size(1), &n_emlrtBCI, (emlrtCTX)sp);
        }
        res[idx + res.size(0) * idy].im = b_itemp;
        //                  res(idy+1,idx+1) = conj(res(idx+1,idy+1));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }
}

// End of code generation (LongRangeOp.cpp)

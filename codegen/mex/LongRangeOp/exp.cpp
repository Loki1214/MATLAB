//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// exp.cpp
//
// Code generation for function 'exp'
//

// Include files
#include "exp.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
void b_exp(creal_T *x)
{
  if (x->im == 0.0) {
    x->re = muDoubleScalarExp(x->re);
    x->im = 0.0;
  } else if (muDoubleScalarIsInf(x->im) && muDoubleScalarIsInf(x->re) &&
             (x->re < 0.0)) {
    x->re = 0.0;
    x->im = 0.0;
  } else {
    real_T d;
    real_T r;
    r = muDoubleScalarExp(x->re / 2.0);
    d = x->im;
    x->re = r * (r * muDoubleScalarCos(x->im));
    x->im = r * (r * muDoubleScalarSin(d));
  }
}

} // namespace coder

// End of code generation (exp.cpp)

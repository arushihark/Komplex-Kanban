#include "complex.h"
#include "math.h"

// e^complex
Complex exp(const Complex& expl) {
  double b = exp(1);
  double ab = pow(b, expl.re);
  double ln = log(b);
  double cosx = cos(expl.im * ln);

  double lnim = log(b);
  double sinx = sin(expl.im * lnim);

  Complex re(cosx, sinx);
  return re;
}

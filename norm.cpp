#include "complex.h"
#include <math.h>

double norm(const Complex& c) {
  double asqr = (c.re)*(c.re);
  double bsqr = (c.im)*(c.im);
  double a = (asqr+bsqr);
  return a;
}

#include "complex.h"
#include <math.h>

double norm(const Complex& c) {
  double asqr = (c.re)*(c.re); //(a^2)
  double bsqr = (c.im)*(c.im); //(b^2)
  double a = sqrt((asqr+bsqr));
  return a;
}

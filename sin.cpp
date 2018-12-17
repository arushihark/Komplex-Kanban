#include "complex.h"
#include <math.h>

Complex sin(const Complex& c) {
  double one = (cosh(c.re)*sin(c.re));
  double two = (sinh(c.im)*cos(c.re));
  Complex ans(one,two);
  return ans;
}

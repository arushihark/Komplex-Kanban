#include <math.h>
#include <iostream>
#include "complex.h"
using namespace std;

Complex conj(Complex& c) {
  c.im = c.im *-1;
  return c;
}

double norm(const Complex& c) {
  double asqr = (c.re)*(c.re);
  double bsqr = (c.im)*(c.im);
  double a = (asqr+bsqr);
  return a;
}

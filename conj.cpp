#include "complex.h"
using namespace std;
Complex& conj(Complex& c) {
  c.im *= -1;
  return c;
}



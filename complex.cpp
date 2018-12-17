#include <iostream>
#include "complex.h"

Complex::Complex(){
  re = 0.0;
  im = 0.0;
 }

 Complex::Complex(double r, double i) {
   re = r;
   im = i;
 }

 double Complex:: imag(const Complex& c) {
    return c.im;
}

double Complex:: real(const Complex& c) {
    return c.re;
}


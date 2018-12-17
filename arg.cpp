#include "complex.h"
#include <cmath>
#include "math.h"

double arg(const Complex& c) {
 double re = c.re;
 double im = c.im;

 re = (re * re);
 im = im * im;
 double sum = im + re;
 sum = sqrt(sum);

 double theta = acos(c.re/sum);
 double theta1 = asin(c.im/sum);
 if (theta == theta1){
   return theta;
 }
 return 0.0;
}

#include "complex.h"
#include <cmath>

Complex polar(double mag, double ang) {
double real = mag*cos(ang);
double imaginary = mag*sin(ang);
Complex conj(real, imaginary);
return conj;
}

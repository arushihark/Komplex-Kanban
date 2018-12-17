#include "complex.h"
#include <math.h>

Complex cos(const Complex& c) {
    Complex ans((cos(c.re)*cosh(c.im)),-(sin(c.re)*sinh(c.im)));
    return ans;
}

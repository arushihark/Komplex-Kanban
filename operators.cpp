#include "complex.h"

void Complex:: operator =(const Complex& rhs){
      Complex a = *this;
      a.re = rhs.re;
      a.im = rhs.im;
      *this = a;
}
Complex Complex:: operator +(const Complex& rhs){ //addition
      Complex a = *this;
      a.re = a.re + rhs.re;
      a.im = a.im + rhs.im;
      return a;
}



Complex Complex:: operator -(const Complex& rhs){ //subtraction operator
      Complex a = *this;
      a.re = a.re + rhs.re;
      a.im = a.im + rhs.im;
      return a;
    }

Complex Complex:: operator *(const Complex& rhs){
     Complex a = *this;
    a.re = (a.re * rhs.re) - (a.im * rhs.im);
    a.im = (a.re * rhs.im) + (a.im * rhs.re);
    return a;

    /*//multiplication operator
      complex c();
      //Multiply and combine like terms:
      c.re = a.re * b.re - a.im * b.im; //subtracting because i^2 is -1, negating the value
      c.im = a.re * b.im + a.im * b.re;
      return c;*/
}

Complex Complex:: operator /(Complex& rhs) { //division operator
    Complex lhs = *this;
    lhs.re = ((lhs.re*rhs.re)+(lhs.im*rhs.im))/(rhs.re*rhs.re+rhs.im*rhs.im);
    lhs.im = (lhs.im*rhs.re-lhs.re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
    return lhs;
}

void Complex:: operator +=(const Complex& rhs){
    Complex lhs = *this;
	lhs = lhs + rhs;
	*this = lhs;
    }

void Complex:: operator -=(const Complex& rhs){ //
    Complex lhs = *this;
    lhs = lhs - rhs;
    *this = lhs;
    }

void Complex:: operator /=(Complex& rhs){ //divide-assign operator
      Complex lhs= *this;
      lhs = lhs/rhs;
      *this = lhs;
    }

void Complex:: operator *=(const Complex& rhs){ //multiply-assign operator
      Complex lhs = *this;
      lhs = lhs * rhs;
      *this = lhs;
}

bool Complex:: operator ==(const Complex& rhs){ //skeptical about this one
      Complex lhs = *this;
      if((lhs.re == rhs.re) && (lhs.im == rhs.im))
        return true;
      else
        return false;
}

ostream& operator <<(ostream& s, const Complex& c){
      s << c.re << " + " << c.im << "i" << endl;
      return s; //Should return as "real number + imaginary#i"
    }

istream& operator >>(istream& lhs, Complex& rhs) {
    cout << "Type in real part of complex number: ";
    lhs >> rhs.re;
    cout << "Type in imaginary part of complex number: ";
    lhs >> rhs.im;
    return lhs;
}


#include <iostream>
#include <string>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex {
  friend ostream& operator <<(ostream& s, const Complex& c);
  friend istream& operator >>(istream& s, Complex& c);
  double abs(Complex& com);
  Complex& conj(Complex& rhs);
  double norm(Complex& com);
  Complex& exp(Complex& rhs);
  Complex sin(Complex& c);
  Complex cos(Complex& c);
  double arg(Complex& rhs);
  Complex polar(double mag, double ang);

  public:
    double re;
    double im;
    double imag(const Complex& c);
    double real(const Complex& c);
    Complex();
    Complex(double r, double i);
    Complex operator +(const Complex& lhs);
    Complex operator -(const Complex& lhs);
    Complex operator *(const Complex& lhs);
    Complex operator /(Complex& lhs);
    void operator +=(const Complex& lhs);
    void operator -=(const Complex& lhs);
    void operator /=(Complex& lhs);
    void operator *=(const Complex& lhs);
    void operator =(const Complex& rhs);
    bool operator ==(const Complex& rhs);

};
#endif

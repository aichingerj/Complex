// Member-function definitions for class Complex.
#include <iostream>
#include <sstream> // for ostringstream class
#include "Complex.hpp"

Complex::Complex(double real, double imaginary)
   : realPart(real), imaginaryPart(imaginary) { }

// Overloaded + operator
Complex operator+(const Complex &right) const
{
   return Complex(
      realPart + right.realPart, imaginaryPart + right.imaginaryPart);
}

// Overloaded - operator
Complex operator-(const Complex &right) const
{
   return Complex(realPart - right.realPart, imaginaryPart - right.imaginaryPart);
}

Complex operator*(const Complex &right) const
{
   return Complex((realPart * right.realPart) - (imaginaryPart * right.imaginaryPart),
                  (imaginaryPart * right.imaginaryPart) + (realPart * right.realPart);
}

std::string Complex::toString() const
{
   std::ostringstream output;
   output << "(" << realPart << ", " << imaginaryPart << ")";
   return output.str();
}

void operator=(double rp, double ip)
{
   realPart = rp;
   imaginaryPart = ip;
}

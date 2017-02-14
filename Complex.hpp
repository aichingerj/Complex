#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <string>

class Complex
{
public:
   Complex(double = 0.0, double = 0.0); // default constructor
   Complex operator+(const Complex&) const;			  // function add
   Complex operator-(const Complex&) const; // function subtract
   Complex operator*(const Complex&) const; // function multiply
   std::string toString() const;  // return string representation
   void operator=(double, double); // set complex number
private:
   double realPart;
   double imaginaryPart;
};

#endif

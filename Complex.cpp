// Member-function definitions for class Complex.
#include <iostream>
#include <sstream> // for ostringstream class
#include "Complex.hpp"


// Default constructor to set the real and imaginary parts of the number
// TEST: Make sure this is a valid way to set the values
Complex::Complex(double real, double imaginary){
	realPart = real;
	imaginaryPart = imaginary;
}

// Overloaded = operator
const Complex& Complex::operator=(const Complex& myNum){
	if(&myNum != this){ // Check to make sure we aren't self-assigning
		realPart = myNum.realPart;
		imaginaryPart = myNum.imaginaryPart;
	}
	return *this;
}

// Overloaded + operator
Complex Complex::operator+(const Complex &right) const
{
   return Complex(
      realPart + right.realPart, imaginaryPart + right.imaginaryPart);
}

// Overloaded - operator
Complex Complex::operator-(const Complex &right) const
{
   return Complex(realPart - right.realPart, imaginaryPart - right.imaginaryPart);
}

Complex Complex::operator*(const Complex &right) const
{
   return Complex((realPart * right.realPart) - (imaginaryPart * right.imaginaryPart),
                  (imaginaryPart * right.imaginaryPart) + (realPart * right.realPart));
}

bool Complex::operator==(const Complex& myNum) const{
	
}

std::istream& operator>>(std::istream& input, Complex& a) {
	input >> a;

	return input;
}

std::ostream& operator<<(std::ostream& output, const Complex& a) {
	output << a;

	return output;
}

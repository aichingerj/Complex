#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <string>

class Complex
{
	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);

	private:
		double realPart;
		double imaginaryPart;

	public:
		Complex(double = 0.0, double = 0.0); // default constructor

		const Complex& operator=(const Complex&); // Overloaded =
   		Complex operator+(const Complex&) const; // Overloaded +
   		Complex operator-(const Complex&) const; // Overloaded -
   		Complex operator*(const Complex&) const; // Overloaded *

		bool operator==(const Complex&) const; // Overloaded ==
		bool operator!=(const Complex& myCompNum) const { // Overloaded !=
			return !(*this == myCompNum); // Opposite of the == operator
		}

   	//	std::string toString() const;  // return string representation
};

#endif

#include <iostream>
#include "header.h"

using namespace std;

complex::complex(double this_real, double this_imaginary)
{
    real = this_real;
    imaginary = this_imaginary;
}

complex::complex()
{
    real = imaginary = 0;
}

complex::~complex()
{
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}

std::istream & operator>>(std::istream & os, complex & c)
{
    cout << "real: ";
    os >> c.real;
    cout << "imaginary: ";
    os >> c.imaginary;

    return os;
}

complex operator+(const complex & c1, const complex & c2)
{
    return complex(c1.real+c2.real, c1.imaginary+c2.imaginary);
}

complex operator-(const complex & c1, const complex & c2)
{
    return complex(c1.real-c2.real, c1.imaginary-c2.imaginary);
}

complex operator*(const complex & c1, const complex & c2)
{
    return complex(c1.real*c2.real-c1.imaginary*c2.imaginary, c1.real*c2.imaginary+c1.imaginary*c2.real);
}

complex operator*(const complex & c, const double r)
{
    return complex(r*c.real, r*c.imaginary);
}

complex operator*(const double r, const complex & c)
{
    return complex(r*c.real, r*c.imaginary);
}

complex operator~(const complex & c)
{
    return complex(c.real, -c.imaginary);
}
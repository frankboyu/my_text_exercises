#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>

class complex
{
private:
    double real;
    double imaginary;
public:
    complex(double this_real, double this_imaginary);
    complex();
    ~complex();

    friend std::ostream & operator<<(std::ostream & os, const complex & c);
    friend std::istream & operator>>(std::istream & os, complex & c);

    friend complex operator+(const complex & c1, const complex & c2);
    friend complex operator-(const complex & c1, const complex & c2);
    friend complex operator*(const complex & c1, const complex & c2);
    friend complex operator*(const complex & c, const double r);
    friend complex operator*(const double r, const complex & c);
    friend complex operator~(const complex & c);
};
#endif
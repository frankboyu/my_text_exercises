// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
public:
    enum Mode {STONE, INT_POUND, FLOAT_POUND};
private:
    static const int Lbs_per_stn = 14;
    int stone; // whole stones
    double pds_left; // fractional pounds
    double pounds; // entire weight in pounds
    Mode mode;
public:
    Stonewt(double lbs, Mode form = FLOAT_POUND); // constructor for double pounds
    Stonewt(int stn, double lbs, Mode form = STONE); // constructor for stone, lbs
    Stonewt(); // default constructor
    ~Stonewt();
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & this_stonewt);
    friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
    friend Stonewt operator*(const Stonewt & s, const double factor);
    friend Stonewt operator*(const double factor, const Stonewt & s);
    friend bool    operator>(const Stonewt & s1, const Stonewt & s2);
    friend bool    operator>=(const Stonewt & s1, const Stonewt & s2);
    friend bool    operator<(const Stonewt & s1, const Stonewt & s2);
    friend bool    operator<=(const Stonewt & s1, const Stonewt & s2);
    friend bool    operator==(const Stonewt & s1, const Stonewt & s2);
    friend bool    operator!=(const Stonewt & s1, const Stonewt & s2);
};
#endif
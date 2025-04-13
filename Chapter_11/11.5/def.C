// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "header.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode form)
{
    stone = int (lbs) / Lbs_per_stn; // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = form;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
    mode = form;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = STONE;
}

Stonewt::~Stonewt() // destructor
{
}

std::ostream & operator<<(std::ostream & os, const Stonewt & this_stonewt)
{
    if (this_stonewt.mode == Stonewt::STONE)
        cout << this_stonewt.stone << " stone, " << this_stonewt.pds_left << " pounds";
    else if (this_stonewt.mode == Stonewt::INT_POUND)
        cout << int(this_stonewt.pounds) << " pounds";
    else if (this_stonewt.mode == Stonewt::FLOAT_POUND)
        cout << this_stonewt.pounds << " pounds";

    return os;
}

Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds + s2.pounds);
}

Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds - s2.pounds);
}

Stonewt operator*(const Stonewt & s, const double factor)
{
    return Stonewt(s.pounds*factor);
}

Stonewt operator*(const double factor, const Stonewt & s)
{
    return Stonewt(s.pounds*factor);
}
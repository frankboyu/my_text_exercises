#include "header.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "Move x: " << x << ", y: " << y << endl;
}

Move Move::add(const Move & m) const
{
    Move temp((*this).x + m.x, (*this).y + m.y);
    return temp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
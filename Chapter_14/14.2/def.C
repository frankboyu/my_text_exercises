#include "header.h"
#include <iostream>
#include <string>
#include <valarray>

using std::string;
using std::valarray;
using std::cin;
using std::cout;
using std::endl;
typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char * l, int y) : string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

Wine::Wine() : string("N/A"), years(0), PairArray(ArrayInt(), ArrayInt()) {}

void Wine::GetBottles()
{
    cout << "Enter " << (const string &) (*this) << " data for " << years << " year(s):" << endl;
    for (int i = 0; i < years ; i++)
    {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
    }
}

const string & Wine::Label() const
{
    return (const string &) (*this);
}

int Wine::sum()
{
    return PairArray::second().sum();
}

void Wine::Show()
{
    cout << "Wine: " << (const string &) (*this) << endl;
    cout << "Year Bottles" << endl;
    for (int i = 0; i < years; i++)
    {
        cout << PairArray::first()[i] << " " << PairArray::second()[i] << endl;
    }
}
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

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char * l, int y) : name(l), years(y), data(ArrayInt(y), ArrayInt(y)) {}

Wine::Wine() : name("N/A"), years(0), data(ArrayInt(), ArrayInt()) {}

void Wine::GetBottles()
{
    cout << "Enter " << name << " data for " << years << " year(s):" << endl;
    for (int i = 0; i < years ; i++)
    {
        cout << "Enter year: ";
        cin >> data.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> data.second()[i];
    }
}

const string & Wine::Label() const
{
    return name;
}

int Wine::sum()
{
    return data.second().sum();
}

void Wine::Show()
{
    cout << "Wine: " << name << endl;
    cout << "Year Bottles" << endl;
    for (int i = 0; i < years; i++)
    {
        cout << data.first()[i] << " " << data.second()[i] << endl;
    }
}
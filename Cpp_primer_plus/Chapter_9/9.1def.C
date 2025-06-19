#include <iostream>
#include "9.1.h"
using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
    int i = 0;
    for (i = 0; name[i] != '\0'; i++)
        g.fullname[i] = name[i];
    g.fullname[i] = '\0';
    handicap(g, hc);
}

int setgolf(golf & g)
{
    char this_name[Len];
    cout << "Enter the golfer name: ";
    cin.getline(this_name, Len);

    int this_handicap;
    cout << "Enter the handicap: ";
    cin >> this_handicap;
    cin.get();

    setgolf(g, this_name, this_handicap);

    if (this_name[0] == '\0')
        return 0;
    else
        return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << "Golfer name: " << g.fullname << ", handicap: " << g.handicap << endl;
}
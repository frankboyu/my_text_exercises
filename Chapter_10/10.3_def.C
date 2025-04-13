#include "header.h"

Golf::Golf()
{
    fullname[0] = '\0';
    handicap = 0;
}

Golf::Golf(const char * this_fullname, int this_handicap)
{
    strcpy(fullname, this_fullname);
    handicap = this_handicap;
}

int Golf::Setgolf()
{
    char this_fullname[Len];
    cout << "Enter the golfer name: ";
    cin.getline(this_fullname, Len);

    if (this_fullname[0] == '\0')
        return 0;

    int this_handicap;
    cout << "Enter the handicap: ";
    cin >> this_handicap;
    cin.get();

    *this = Golf(this_fullname, this_handicap);

    return 1;
}

void Golf::Set_handicap(int this_handicap)
{
    handicap = this_handicap;
}

void Golf::Show() const
{
    cout << "Golfer name: " << fullname << ", handicap: " << handicap << endl;
}
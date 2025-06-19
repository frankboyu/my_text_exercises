#include "header.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Person::Set()
{
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
}

void Gunslinger::Set()
{
    Person::Set();
    cout << "Enter draw time: ";
    cin >> draw_time;
    while (cin.get() != '\n')
        continue;
    cout << "Enter number of notches: ";
    cin >> notches;
    while (cin.get() != '\n')
        continue;
}

void PokerPlayer::Set()
{
    Person::Set();
}

void BadDude::Set()
{
    Gunslinger::Set();
}
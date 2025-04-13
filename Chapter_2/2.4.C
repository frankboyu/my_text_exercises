#include <iostream>

using namespace std;

int main()
{
    int year, month;

    cout << "Enter your age: ";
    cin >> year;

    month = year*12;

    cout << "Your age in months is " << month << "." << endl;

    return 0;
}
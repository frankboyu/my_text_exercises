#include <iostream>
using namespace std;

int factorial(unsigned int number)
{
    if (number > 0)
        return number*factorial(number-1);
    else if (number == 0)
        return 1;
    else
    {
        cout << "Invalid argument!" << endl;
        return -1;
    }
}

int main()
{
    int this_number;
    cout << "Enter a non-negative integer number: ";
    while(cin >> this_number)
    {
        if (this_number >= 0)
        {
            cout << this_number << "! = " << factorial(this_number) << endl;
            cout << "Next number: ";
        }
        else
        {
            cout << "Invalid number, aborting..." << endl;
            break;
        }
    }

    return 0;
}
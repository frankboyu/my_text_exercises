#include <iostream>
#include <cmath>
#include "header.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double x, y, z1, z2;
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        { // start of try block
            z1 = hmean(x,y);
            z2 = gmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y << " is " << z1 << endl;
            cout << "Geometric mean of " << x << " and " << y << " is " << z2 << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (logic_error_with_values & le)
        {
            le.mesg();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a,b);
    return std::sqrt(a * b);
}
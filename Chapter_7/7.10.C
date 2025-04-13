#include <iostream>
using namespace std;

double calculate(double x, double y, double (*pf)(double pf_x, double pf_y))
{
    return (*pf)(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}

int main()
{
    double (*pf[4])(double, double) = {add, subtract, multiply, divide};
    double x, y;

    cout << "Enter a pair of numbers: ";
    while (cin >> x >> y)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << calculate(x, y, pf[i]) << ", ";
        }
        cout << endl;
        cout << "Next pair of numbers: ";
    }
    cout << "Invalid input, terminating..." << endl;
    return 0;
}

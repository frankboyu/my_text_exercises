#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double celsius)
{
    return 1.8*celsius+32;
}

int main()
{
    double celsius;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsius_to_fahrenheit(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}
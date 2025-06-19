#include <iostream>

using namespace std;

int main()
{
    const float liters_per_gallon = 3.875;
    const float miles_per_hundred_kilometers = 62.14;

    float gas_consumption;

    cout << "Enter the gasoline consumption in liters per 100 kilometers: ";
    cin >> gas_consumption;

    cout << "That is equivalent to " << 1/(gas_consumption/liters_per_gallon/miles_per_hundred_kilometers) << " miles per gallon." << endl;

    return 0;
}
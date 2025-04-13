#include <iostream>

using namespace std;

int main()
{

    float miles, gallons;

    cout << "Enter the miles you have driven: ";
    cin >> miles;
    cout << "Enter the gallons you have used: ";
    cin >> gallons;

    cout << "Your car has gotten " << miles/gallons << " miles per gallon." << endl;

    return 0;
}
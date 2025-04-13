#include <iostream>

using namespace std;

int main()
{
    const int foot_to_inch = 12;
    const float inch_to_meter = 0.0254;
    const float pound_to_kilogram = 1/2.2;

    int feet, inches, weight;

    cout << "Enter your height in feet: ";
    cin >> feet;
    cout << "Enter your height in inches: ";
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Your body mass index is " << (weight*pound_to_kilogram)/pow((feet*foot_to_inch+inches)*inch_to_meter, 2) << endl;

    return 0;
}
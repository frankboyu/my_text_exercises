#include <iostream>

using namespace std;

int main()
{
    const int foot_to_inch = 12;

    int height;

    cout << "Enter your height in integer inches:__________\b\b\b\b\b\b\b\b\b\b";
    cin >> height;

    cout << "Your height in feet and inches is " << height/foot_to_inch << " feet and " << height%foot_to_inch << " inches." << endl;

    return 0;
}
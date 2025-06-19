#include <iostream>
using namespace std;

float harmonic_mean(float x, float y)
{
    return 2.0 * x * y / (x + y);
}

int main()
{
    float n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    while (n1*n2 != 0)
    {
        cout << "The harmonic mean of these two numbers: " << harmonic_mean(n1, n2) << endl;
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }
    cout << "One of the numbers is zero, aborting..." << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int intA, intB, sum;
    cout << "Enter the smaller integer: ";
    cin >> intA;
    cout << "Enter the bigger integer: ";
    cin >> intB;

    sum = 0;
    for (int i=intA; i<=intB; i++)
    {
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
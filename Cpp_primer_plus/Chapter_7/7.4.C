#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned powerball)
{
    long double result = 1.0 * powerball;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

int main()
{
    double total, choices, powerball;
    cout << "Enter the total number of choices on the game card and \nthe number of picks allowed and\nthe number of power balls:\n";
    while ((cin >> total >> choices >> powerball) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, powerball);
        cout << " of winning. \n";
        cout << "Next three numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
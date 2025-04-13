#include <iostream>
using namespace std;

int main()
{
    double this_number = 1.0;
    double sum = 0;

    while (this_number != 0)
    {
        cout << "Enter an integer. Stop if 0 entered: ";
        cin >> this_number;
        sum += this_number;
        cout << "The cumulative sum is: " << sum << endl;
    }

    cout << "Program terminated." << endl;

    return 0;
}
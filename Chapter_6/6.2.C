#include <iostream>
using namespace std;

int main()
{
    int nMax = 10;
    int nFilled;
    double donations[nMax];
    cout << "Please enter the donations." << endl;
    cout << "You may enter up to 10 donations. Enter non-numeric input to terminate." << endl;

    for (int i=0; i<nMax; i++)
    {
        cout << "Donation #" << i+1 << ": ";
        if (!(cin >> donations[i]))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Input terminated." << endl;
            break;
        }
        else
            nFilled++;
    }

    double average = 0;
    int greater_than_avg = 0;
    for (int i=0; i<nFilled; i++)
        average += donations[i];
    average /= nFilled;
    for (int i=0; i<nFilled; i++)
    {
        if (donations[i] > average)
            greater_than_avg++;
    }
    cout << "The average donation is " << average << endl;
    cout << "There are " << greater_than_avg << " donations greater than average" << endl;

    return 0;
}
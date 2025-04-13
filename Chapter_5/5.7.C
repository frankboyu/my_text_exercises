#include <iostream>
#include <string>
using namespace std;

struct car
{
    string  make;
    int     year;
};


int main()
{
    unsigned int number;
    cout << "How many cars do you wish to catalog? ";
    cin >> number;
    cin.get();

    car * car_catalog = new car [number];

    for (int i=0; i<number; i++)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, car_catalog[i].make);
        cout << "Please enter the year made: ";
        cin >> car_catalog[i].year;
        cin.get();
    }

    cout << "Here is your collection:" << endl;
    for (int i=0; i<number; i++)
    {
        cout << car_catalog[i].year << " " << car_catalog[i].make << endl;
    }

    return 0;
}
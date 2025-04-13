#include <iostream>
#include <string>
using namespace std;

struct contributor
{
    string name;
    double contribution;
};


int main()
{
    int arrsize;
    cout << "Enter the number of contributors: ";
    cin >> arrsize;
    cin.get();

    contributor * list = new contributor [arrsize];
    for (int i=0; i<arrsize; i++)
    {
        cout << "Contributor No." << i+1 << endl;
        cout << "Name: ";
        getline(cin, list[i].name);
        cout << "Contribution: ";
        cin >> list[i].contribution;
        cin.get();
    }

    cout << "List of Grand Patrons:" << endl;
    int nGrand = 0;
    for (int i=0; i<arrsize; i++)
    {
        if (list[i].contribution >= 10000)
        {
            cout << "Name: " << list[i].name << ". \t Contribution: " << list[i].contribution << endl;
            nGrand++;
        }
    }
    if (nGrand == 0)
        cout << "none." << endl;

    cout << "List of Patrons:" << endl;
    int nOthers = 0;
    for (int i=0; i<arrsize; i++)
    {
        if (list[i].contribution < 10000)
        {
            cout << "Name: " << list[i].name << ". \t Contribution: " << list[i].contribution << endl;
            nOthers++;
        }
    }
    if (nOthers == 0)
        cout << "none." << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct contributor
{
    string name;
    double contribution;
};


int main()
{
    ifstream inFile;
    inFile.open("list.txt");
    int arrsize;
    inFile >> arrsize;
    inFile.get();

    contributor * list = new contributor [arrsize];
    for (int i=0; i<arrsize; i++)
    {
        getline(inFile, list[i].name);
        inFile >> list[i].contribution;
        inFile.get();
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
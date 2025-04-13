#include <iostream>
using namespace std;

int main()
{
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[12];
    int total = 0;

    for (int i=0; i<12; i++)
    {
        cout << "Enter the sale for " << months[i] << ": ";
        cin >> sales[i];
        total += sales[i];
    }

    cout << "The total sales for the year is: " << total << endl;

    return 0;
}
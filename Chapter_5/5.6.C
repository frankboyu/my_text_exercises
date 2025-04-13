#include <iostream>
using namespace std;

int main()
{
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[3][12];
    int total[3] = {};

    for (int i=0; i<3; i++)
    {
        cout << "Year " << i+1 << endl;
        for (int j=0; j<12; j++)
        {
            cout << "Enter the sale for " << months[j] << ": ";
            cin >> sales[i][j];
            total[i] += sales[i][j];
        }

        cout << "The total sales for the year is: " << total[i] << endl;
    }

    cout << "The combined sales of the three years is: " << total[0]+total[1]+total[2] << endl;


    return 0;
}
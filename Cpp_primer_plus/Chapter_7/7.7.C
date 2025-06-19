#include <iostream>
using namespace std;

const int Max = 5;

double * fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ":";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process teminated. \n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return ar+i;
}

void show_array(const double * arr_start, const double * arr_end)
{
    for (const double * ptr = arr_start; ptr < arr_end; ptr++)
    {
        cout << "Property #" << (ptr-arr_start+1) << ": $";
        cout << *ptr << endl;
    }
}

void revalue(double r, double * arr_start, double * arr_end)
{
    for (double * ptr = arr_start; ptr < arr_end; ptr++)
        *ptr *=r;
}

int main()
{
    double properties[Max];

    double * arr_end = fill_array(properties, Max);
    show_array(properties, arr_end);
    if (arr_end != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, arr_end);
        show_array(properties, arr_end);
    }
    cout << "Done. \n";
    cin.get();
    cin.get();
    return 0;
}

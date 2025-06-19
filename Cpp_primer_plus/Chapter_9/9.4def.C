#include <iostream>
#include "9.4.h"
using namespace std;
using namespace SALES;

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        int arr_size = (n<QUARTERS) ? n : QUARTERS;
        for (int i = 0; i < arr_size; i++)
            s.sales[i] = ar[i];
        for (int i = arr_size; i < QUARTERS; i++)
            s.sales[i] = 0;
        s.average = s.sales[0];
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 1; i < arr_size; i++)
        {
            if(s.sales[i] > s.max)
                s.max = s.sales[i];
            if(s.sales[i] < s.min)
                s.min = s.sales[i];
            s.average += s.sales[i];
        }
        s.average /= arr_size;
    }

    void setSales(Sales & s)
    {
        double this_sale[4];
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter the sales for quarter " << i+1 << ": ";
            cin >> this_sale[i];
        }
        setSales(s, this_sale, QUARTERS);
    }

    void showSales(const Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "The sale of quarter " << i+1 << " is: " << s.sales[i] << endl;
        }
        cout << "The average sale is " << s.average << endl;
        cout << "The max sale is " << s.max << endl;
        cout << "The min sale is " << s.min << endl;
    }
}
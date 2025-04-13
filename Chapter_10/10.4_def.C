#include "header.h"
using namespace SALES;

namespace SALES
{
    Sales::Sales()
    {
        for (int i = 0; i < 4; i++)
            sales[i] = 0;
        average = 0;
        max = 0;
        min = 0;
    }

    Sales::Sales(const double these_sales[], int n)
    {
        int arr_size = (n<QUARTERS) ? n : QUARTERS;
        for (int i = 0; i < arr_size; i++)
            sales[i] = these_sales[i];
        for (int i = arr_size; i < QUARTERS; i++)
            sales[i] = 0;
        average = sales[0];
        max = sales[0];
        min = sales[0];
        for (int i = 1; i < arr_size; i++)
        {
            if(sales[i] > max)
                max = sales[i];
            if(sales[i] < min)
                min = sales[i];
            average += sales[i];
        }
        average /= arr_size;
    }

    void Sales::Show() const
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "The sale of quarter " << i+1 << " is: " << sales[i] << endl;
        }
        cout << "The average sale is " << average << endl;
        cout << "The max sale is " << max << endl;
        cout << "The min sale is " << min << endl;
    }

    void Sales::Set_Sales()
    {
        double these_sales[4];
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter the sales for quarter " << i+1 << ": ";
            cin >> these_sales[i];
        }
        *this = Sales(these_sales, QUARTERS);
    }
}
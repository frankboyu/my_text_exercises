#include <iostream>
#include "header.h"
using namespace std;
using namespace SALES;

int main()
{
    double sales_pre_covid [3] = {3000, 4000, 5000};
    Sales pre_covid(sales_pre_covid, 3);
    pre_covid.Show();

    Sales post_covid;
    post_covid.Set_Sales();
    post_covid.Show();

    return 0;
}


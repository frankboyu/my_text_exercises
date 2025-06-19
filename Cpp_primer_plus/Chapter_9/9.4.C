#include <iostream>
#include "9.4.h"
using namespace std;
using namespace SALES;

int main()
{
    Sales pre_covid;
    double sales_pre_covid [3] = {3000, 4000, 5000};
    setSales(pre_covid, sales_pre_covid, 3);
    showSales(pre_covid);

    Sales post_covid;
    setSales(post_covid);
    showSales(post_covid);

    return 0;
}


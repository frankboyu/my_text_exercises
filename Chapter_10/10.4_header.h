#include <iostream>

using namespace std;

namespace SALES
{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double these_sales[], int n);
        void Show() const;
        void Set_Sales();
    };
}

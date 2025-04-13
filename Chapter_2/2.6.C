#include <iostream>

using namespace std;

double ly_to_au(double light_year)
{
    return 63240*light_year;
}

int main()
{
    double light_year;

    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = " << ly_to_au(light_year) << " astronomical units." << endl;

    return 0;
}
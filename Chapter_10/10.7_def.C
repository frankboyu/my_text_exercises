#include "header.h"

Betelgeusean_Plorg::Betelgeusean_Plorg()
{
    strcpy(name, "Plorga");
    CI = 50;
}

Betelgeusean_Plorg::Betelgeusean_Plorg(const char * this_name, int this_CI)
{
    strcpy(name, this_name);
    CI = this_CI;
}

void Betelgeusean_Plorg::set_CI(int this_CI)
{
    CI = this_CI;
}

void Betelgeusean_Plorg::show() const
{
    cout << "Name: " << name << ", contentment index: " << CI << endl;
}
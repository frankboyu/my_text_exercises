#include <iostream>
using namespace std;

double tax (double income)
{
    double tax_owed = 0.0;
    if      (income>=0 && income<5000)
        tax_owed = (income-0)*0.0;
    else if (income>=5000 && income<15000)
        tax_owed = 5000*0.0 + (income-5000)*0.1;
    else if (income>=15000 && income<35000)
        tax_owed = 5000*0.0 + 10000*0.1 + (income-15000)*0.15;
    else if (income >= 35000)
        tax_owed = 5000*0.0 + 10000*0.1 + 20000*0.15 + (income-35000)*0.2;
    return tax_owed;
}

int main()
{
    double income;
    cout << "Enter your income in tvarp. Terminate with negative number of non-numeric input." << endl;
    cout << "Your income: ";
    while ((cin >> income) && (income >= 0))
    {
        cin.get();
        cout << "Your tax owed: " << tax(income) << endl;
        cout << "Next income: ";
    }
    cout << "Terminated." << endl;;

    return 0;
}
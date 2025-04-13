#include <iostream>
using namespace std;

const int Seasons = 4;
const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses_template
{
    double expenses_array[Seasons];
};


void fill(expenses_template * this_expense)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> this_expense->expenses_array[i];
    }
}

void show(const expenses_template * this_expense)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << this_expense->expenses_array[i] << endl;
        total += this_expense->expenses_array[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

int main()
{
    expenses_template expenses;
    fill(&expenses);
    show(&expenses);

    return 0;
}

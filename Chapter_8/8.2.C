#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

void set_candybar(CandyBar & this_candybar, const char * this_name = "Millennium Munch", const double this_weight = 2.85, const int this_calorie = 350)
{
    this_candybar.brand = this_name;
    this_candybar.weight = this_weight;
    this_candybar.calorie = this_calorie;
    return;
}

void show_candybar(const CandyBar & this_candybar)
{
    cout << "Brand: " << this_candybar.brand << endl;
    cout << "Weight: " << this_candybar.weight << endl;
    cout << "Calorie: " << this_candybar.calorie << endl;
    return;
}

int main()
{
    cout << "Test 1:" << endl;
    CandyBar test1;
    set_candybar(test1);
    show_candybar(test1);

    cout << "Test 2:" << endl;
    CandyBar test2;
    set_candybar(test2, "Welch", 20.1, 101);
    show_candybar(test2);

    return 0;
}

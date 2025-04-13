#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};

int main()
{
    CandyBar * snacks = new CandyBar [3];

    snacks[0].brand = "AAA";
    snacks[0].weight = 1.1;
    snacks[0].calories = 111;

    snacks[1].brand = "BBB";
    snacks[1].weight = 2.2;
    snacks[1].calories = 222;

    snacks[2].brand = "CCC";
    snacks[2].weight = 3.3;
    snacks[2].calories = 333;

    cout << "Brand: " << snacks[0].brand << endl;
    cout << "Weight: " << snacks[0].weight  << " oz" << endl;
    cout << "Calories: " << snacks[0].calories << endl;

    cout << "Brand: " << snacks[1].brand << endl;
    cout << "Weight: " << snacks[1].weight  << " oz" << endl;
    cout << "Calories: " << snacks[1].calories << endl;

    cout << "Brand: " << snacks[2].brand << endl;
    cout << "Weight: " << snacks[2].weight  << " oz" << endl;
    cout << "Calories: " << snacks[2].calories << endl;

    return 0;
}
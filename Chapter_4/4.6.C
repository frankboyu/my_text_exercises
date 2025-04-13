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
    CandyBar snacks[3] = {{"AAA", 1.1, 111}, {"BBB", 2.2, 222}, {"CCC", 3.3, 333}};

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
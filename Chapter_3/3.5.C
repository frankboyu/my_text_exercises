#include <iostream>

using namespace std;

int main()
{

    long long population_world, population_us;

    cout << "Enter the world's population: ";
    cin >> population_world;
    cout << "Enter the population of the US: ";
    cin >> population_us;

    cout << "The population of the US is " << (double(population_us)/double(population_world))*100 << "% of the world population." << endl;

    return 0;
}
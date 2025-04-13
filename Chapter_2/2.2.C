#include <iostream>

using namespace std;

int main()
{
    double furlongs, yards;

    cout << "Enter the distance in furlongs: ";
    cin >> furlongs;
    yards = furlongs * 220;
    cout << furlongs << " furlongs is equal to " << yards << " yards." << endl;

    return 0;
}
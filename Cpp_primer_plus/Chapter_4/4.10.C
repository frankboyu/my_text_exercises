#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<float, 3> times;

    cout << "Enter the first time in seconds: ";
    cin >> times[0];

    cout << "Enter the second time in seconds: ";
    cin >> times[1];

    cout << "Enter the third time in seconds: ";
    cin >> times[2];

    cout << "The times are " << times[0] << "s, " << times[1] << "s, and " << times[2] << "s." << endl;
    cout << "The average is " << (times[0]+times[1]+times[2])/3 << "s." << endl;

    return 0;
}
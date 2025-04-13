#include <iostream>

using namespace std;

void print_time(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
    return;
}

int main()
{
    int hour, min;

    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;

    print_time(hour, min);

    return 0;
}
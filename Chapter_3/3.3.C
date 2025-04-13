#include <iostream>

using namespace std;

int main()
{
    const float deg_to_min = 60.0;
    const float min_to_sec = 60.0;

    int latitude_degrees, latitude_minutes, latitude_seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> latitude_degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> latitude_minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> latitude_seconds;

    cout << latitude_degrees << " degrees, " << latitude_minutes << " minutes, " << latitude_seconds << " seconds = " << latitude_degrees+latitude_minutes/deg_to_min+latitude_seconds/min_to_sec/deg_to_min << " degrees" << endl;

    return 0;
}
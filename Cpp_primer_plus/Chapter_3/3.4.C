#include <iostream>

using namespace std;

int main()
{
    const int hours_per_day         = 24;
    const int minutes_per_hour      = 60;
    const int seconds_per_minute    = 60;

    long long number_of_seconds;

    cout << "Enter the number of seconds: ";
    cin >> number_of_seconds;

    int time_day    = number_of_seconds/(seconds_per_minute*minutes_per_hour*hours_per_day);
    int time_hour   = number_of_seconds%(seconds_per_minute*minutes_per_hour*hours_per_day)/(seconds_per_minute*minutes_per_hour);
    int time_minute = number_of_seconds%(seconds_per_minute*minutes_per_hour)/seconds_per_minute;
    int time_second = number_of_seconds%seconds_per_minute;

    cout << number_of_seconds << " seconds = " << time_day << " days, " << time_hour << " hours, " << time_minute << " minutes, " << time_second << " seconds" << endl;

    return 0;
}
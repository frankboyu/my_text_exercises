#include <iostream>
#include <string>

using namespace std;

template<typename T>
long double sum_values(T value)
{
    return value;
}

template<typename T, typename... Args>
long double sum_values(T value, Args... args)
{
    return value+sum_values(args...);
}

int main()
{
    cout << sum_values(1,2,3,4,5,6,7,8.0,9.0,10.0) << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <class T>
T max5(const T this_arr[5])
{
    int index = 0;
    for (int i = 1; i < 5; i++)
    {
        if(this_arr[i] > this_arr[index])
            index = i;
    }
    return this_arr[index];
}

int main()
{
    int arr1[5] = {7, 1, 3, 2, 4};
    cout << max5(arr1) << endl;

    double arr2[5] = {3.2, 4.1, 9.2, 1.5, 2.2};
    cout << max5(arr2) << endl;

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T maxn(const T this_arr[], int arr_size)
{
    int index = 0;
    for (int i = 1; i < arr_size; i++)
    {
        if(this_arr[i] > this_arr[index])
            index = i;
    }
    return this_arr[index];
}

template <> char * maxn(char * const this_arr[], int arr_size)
{
    int index = 0;
    for (int i = 1; i < arr_size; i++)
    {
        if(strlen(this_arr[i]) > strlen(this_arr[index]))
            index = i;
    }
    return this_arr[index];
}

int main()
{
    int arr1[6] = {7, 1, 3, 2, 4, 42};
    cout << maxn(arr1, 6) << endl;

    double arr2[4] = {3.2, 4.1, 1.5, 2.2};
    cout << maxn(arr2, 4) << endl;

    char * arr3[5] = {"Storm", "Earth", "And Fire", "Heed", "My Call"};
    cout << maxn(arr3, 5)<< endl;

    return 0;
}

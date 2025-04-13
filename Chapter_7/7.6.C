#include <iostream>
using namespace std;

int Fill_array(double arr_name[], int arr_size)
{
    int i;
    cout << "Enter the array elements one by one: " << endl;
    for (i=0; i<arr_size; i++)
    {
        cout << "No. " << i+1 << ": ";
        if (!(cin >> arr_name[i]))
        {
            cout << "Aborting...";
            break;
        }
    }
    if (i==10)
        cout << "Array full" << endl;

    return i;
}

void Show_array(double arr_name[], int arr_size)
{
    cout << "The array content is: ";
    for (int i=0; i<arr_size; i++)
        cout << arr_name[i] << " ";
    cout << endl;
}

void Reverse_array(double arr_name[], int arr_size)
{
    double temp;
    for (int i=0,j=arr_size-1; i<j; i++, j--)
    {
        temp = arr_name[i];
        arr_name[i] = arr_name[j];
        arr_name[j] = temp;
    }
}

int main()
{
    int max_size = 10;
    double this_array[max_size];
    int this_size = Fill_array(this_array, max_size);
    Show_array(this_array, this_size);
    Reverse_array(this_array, this_size);
    Show_array(this_array, this_size);
    Reverse_array(this_array+1, this_size-2);
    Show_array(this_array, this_size);

    return 0;
}
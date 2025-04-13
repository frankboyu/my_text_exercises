#include <iostream>
using namespace std;

int max_size = 10;

int input_array(int array[])
{
    int this_score, i;
    for (i = 0; i<max_size; i++)
    {
        cout << "Enter score No. " << i+1 << ": ";
        cin >> this_score;
        if (this_score > 0)
            array[i] = this_score;
        else
        {
            cout << "Invalid score, terminating..." << endl;;
            break;
        }
    }
    return i;
}

void display_array(int array[], int arr_size)
{
    cout << "The scores are: ";
    for (int i=0; i<arr_size; i++)
        cout << array[i] << " ";
    cout << endl;
}

float average_array(int array[], int arr_size)
{
    float average = 0.0;
    for (int i=0; i<arr_size; i++)
        average += array[i];
    average /= arr_size;
    cout << "The average score is: " << average << endl;
    return average;
}

int main()
{
    int golf_score[10] = {};

    int arr_size = input_array(golf_score);

    display_array(golf_score, arr_size);

    average_array(golf_score, arr_size);

    return 0;
}
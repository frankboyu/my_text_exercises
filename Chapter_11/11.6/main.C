#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Stonewt list[6] = {Stonewt(1), Stonewt(2), Stonewt(3)};

    double this_weight;
    for (int i = 3; i < 6; i++)
    {
        cout << "Enter the weight in pounds: ";
        cin >> this_weight;
        list[i] = Stonewt(this_weight);
        cout << list[i] << endl;
    }

    int index_max = 0;
    int index_min = 0;
    Stonewt threshold = Stonewt(11, 0);
    int number_beyond = 0;


    for (int i = 1; i < 6; i++)
    {
        index_max = (list[i] > list[index_max]) ? i : index_max;
        index_min = (list[i] < list[index_min]) ? i : index_min;
        number_beyond += (list[i] > threshold) ? 1 : 0;
    }

    cout << "Max weight is: " << list[index_max] << endl;
    cout << "Min weight is: " << list[index_min] << endl;
    cout << number_beyond << " elements are greater than 11 stone." << endl;

    return 0;
}
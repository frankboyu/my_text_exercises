#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main()
{
    abcDMA * list[3];
    char temp1[40];
    char temp2[40];
    int temp_rating;
    char kind;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the label: ";
        cin.getline(temp1, 40);
        cout << "Enter a rating: ";
        cin >> temp_rating;
        cout << "Enter 1 for baseDMA, 2 for lacksDMA, 3 for hasDMA: ";
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout << "Enter either 1, 2 or 3: ";
        if (kind == '1')
        {
            list[i] = new baseDMA(temp1, temp_rating);
            while (cin.get() != '\n')
                continue;
        }
        else if (kind == '2')
        {
            cout << "Enter the color: ";
            cin.get();
            cin.getline(temp2, 40);
            list[i] = new lacksDMA(temp2, temp1, temp_rating);
        }
        else if (kind == '3')
        {
            cout << "Enter the style: ";
            cin.get();
            cin.getline(temp2, 40);
            list[i] = new hasDMA(temp2, temp1, temp_rating);
        }
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        list[i]->View();
    }

    for (int i = 0; i < 3; i++)
    {
        delete list[i];
    }

    return 0;
}

#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Golf Ann("Ann Birdfree", 24);
    Ann.Show();

    cout << "Enter the information of up to 5 golfers, terminate with empty name." << endl;
    Golf list[5];
    for (int i = 0; i < 5; i++)
    {
        if (list[i].Setgolf() == 0)
        {
            cout << "Empty name, terminating..." << endl;
            break;
        }
        list[i].Show();
    }

    return 0;
}


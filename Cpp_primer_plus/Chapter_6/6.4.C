#include <iostream>
using namespace std;

const int strsize = 20;
const int arrsize = 3;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};


int main()
{
    bop list_members[arrsize] = {{"A1", "A2", "A3", 0}, {"B1", "B2", "B3", 1}, {"C1", "C2", "C3", 2}};

    char choice;
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name \t b. display by title" << endl;
    cout << "c. display by bopname \t d. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choce: ";
    cin >> choice;
    while(choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            for (int i=0; i<arrsize; i++)
                cout << list_members[i].fullname << endl;
            break;
        case 'b':
            for (int i=0; i<arrsize; i++)
                cout << list_members[i].title << endl;
            break;
        case 'c':
            for (int i=0; i<arrsize; i++)
                cout << list_members[i].bopname << endl;
            break;
        case 'd':
            for (int i=0; i<arrsize; i++)
            {
                switch (list_members[i].preference)
                {
                case 0:
                    cout << list_members[i].fullname << endl;
                    break;
                case 1:
                    cout << list_members[i].title << endl;
                    break;
                case 2:
                    cout << list_members[i].bopname << endl;
                    break;
                default:
                    break;
                }
            }
            break;
        default:
            cout << "Not a valid option." << endl;
            break;
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore \t p) pianist" << endl;
    cout << "t) tree \t g) game" << endl;

    char option;
    while (cin >> option)
    {
        switch (option)
        {
        case 'c':
            cout << "A carnivore is a tree." << endl;
            break;
        case 'p':
            cout << "A pianist is a tree." << endl;
            break;
        case 't':
            cout << "A tree is a tree." << endl;
            break;
        case 'g':
            cout << "A game is a tree." << endl;
            break;
        default:
            cout << "Please enter a c, p, t, or g: ";
            continue;
        }
        break;
    }

    return 0;
}
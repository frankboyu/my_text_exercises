#include <iostream>
#include <cstring>
#include "header.h"
using std::cout;
using std::cin;
using std::endl;
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTp<Person *> lolas(SIZE);

    int ct;
    Person * temp;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "g: Gunslinger p: PokerPlayer "
            << "b: BadDude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, b, p, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'g':   temp = new Gunslinger;
                        lolas.enqueue(temp);
                        break;
            case 'p':   temp = new PokerPlayer;
                        lolas.enqueue(temp);
                        break;
            case 'b':   temp = new BadDude;
                        lolas.enqueue(temp);
                        break;
        }
        cin.get();
        temp->Set();
    }

    cout << "\nHere is your staff:\n";
    while (!lolas.isempty())
    {
        lolas.dequeue(temp);
        temp->Show();
    }

    cout << "Bye.\n";
    return 0;
}

#include <iostream>
#include <cstring>
#include "header.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTp<Worker *> lolas(SIZE);

    cout << "Hello!" << endl;

    int ct;
    Worker * temp;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter s: singer "
            << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   temp = new Waiter;
                        lolas.enqueue(temp);
                        break;
            case 's':   temp = new Singer;
                        lolas.enqueue(temp);
                        break;
            case 't':   temp = new SingingWaiter;
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

#include <iostream>
#include <cctype>
#include "header.h"
int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer this_customer;
    double total_payment = 0;
    cout << "Please enter A to add a customer, \n" << "P to process a payment, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':   cout << "Enter a customer name to add: ";
                        cin.getline(this_customer.fullname, 35);
                        cout << "Enter a payment to add: ";
                        cin >> this_customer.payment;
                        if (st.isfull())
                            cout << "stack already full\n";
                        else
                            st.push(this_customer);
                        break;
            case 'P':
            case 'p':   if (st.isempty())
                            cout << "stack already empty\n";
                        else
                        {
                            st.pop(this_customer);
                            cout << "customer " << this_customer.fullname << " with " << this_customer.payment <<" popped\n";
                            total_payment += this_customer.payment;
                            cout << "total payment processed is " << total_payment << endl;
                        }
                        break;
        }
        cout << "Please enter A to add a customer, \n" << "P to process a payment, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
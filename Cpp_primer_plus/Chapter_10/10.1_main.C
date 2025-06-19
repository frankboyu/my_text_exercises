#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    BankAccount Cindy("Cindy MacLauren", "AAA12202024", 200);
    Cindy.Display();

    Cindy.Deposit(100);
    cout << "Deposited 100. Now." << endl;
    Cindy.Display();

    Cindy.Withdraw(500);
    cout << "Withdraw 500. Now." << endl;
    Cindy.Display();

    return 0;
}


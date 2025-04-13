#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string depositor_name;
    string account_number;
    double balance;
public:
    BankAccount();
    BankAccount(string this_depositor_name, string this_account_number, double this_balance);
    void Display();
    void Deposit(double amount);
    void Withdraw(double amount);
};
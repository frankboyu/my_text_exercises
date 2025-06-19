#include "header.h"

BankAccount::BankAccount()
{
    depositor_name = "No_name";
    account_number = "No_number";
    balance = 0.0;
}

BankAccount::BankAccount(string this_depositor_name, string this_account_number, double this_balance)
{
    depositor_name = this_depositor_name;
    account_number = this_account_number;
    balance = this_balance;
}

void BankAccount::Display()
{
    cout << "Depositor name: " << depositor_name << ", ";
    cout << "account Number: " << account_number << ", ";
    cout << "balance: " << balance << endl;
}

void BankAccount::Deposit(double amount)
{
    if (amount <= 0)
        cout << "The amount has to be positive. Deposit aborted." << endl;
    else
        balance += amount;

    return;
}

void BankAccount::Withdraw(double amount)
{
    if (amount <= 0)
        cout << "The amount has to be positive. Withdraw aborted." << endl;
    else
        balance -= amount;

    return;
}
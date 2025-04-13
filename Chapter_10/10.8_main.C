#include <iostream>
#include "header.h"

using namespace std;

void Show(double & number)
{
    cout << "The number is " << number << endl;
}

void Double(double & number)
{
    number *= 2.0;
}

int main()
{
    List test;

    test.visit(Show);
    cout << endl;

    test.add(1.0);
    test.visit(Show);
    cout << endl;

    test.add(4.0);
    test.add(7.0);
    test.add(777.0);
    test.visit(Show);
    cout << endl;

    test.visit(Double);
    test.visit(Show);
    cout << endl;

    cout << test.isempty() << endl;
    cout << test.isfull() << endl;

    return 0;
}
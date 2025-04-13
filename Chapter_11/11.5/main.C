#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Stonewt s1(150.5);
    cout << s1 << endl;

    Stonewt s2(10, 2.5);
    cout << s2 << endl;

    Stonewt s3;
    cout << s3 << endl;

    cout << s1+s2 << endl;
    cout << s1-s2 << endl;
    cout << 2*s1 << endl;
    cout << s2*2 << endl;

    return 0;
}
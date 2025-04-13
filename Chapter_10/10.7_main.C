#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Betelgeusean_Plorg test1;
    test1.show();
    test1.set_CI(60);
    test1.show();

    Betelgeusean_Plorg test2("Whatever", 70);
    test2.show();

    return 0;
}
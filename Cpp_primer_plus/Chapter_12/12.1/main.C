#include <iostream>
using namespace std;
#include "header.h" // to avoid confusion with complex.h
int main()
{
    Cow test1;
    test1.ShowCow();

    Cow test2 = Cow("Tech", "Lobby", 8);
    test2.ShowCow();

    Cow test3 = test2;
    test3.ShowCow();

    test3 = test1;
    test3.ShowCow();

    return 0;
}
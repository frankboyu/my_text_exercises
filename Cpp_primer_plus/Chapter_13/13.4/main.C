#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main()
{
    Port test1 = Port("Sprite", "Lemon", 1);
    cout << test1;

    VintagePort test2 = VintagePort("7up", 7, "Man United", 2023);
    cout << test2;

    return 0;
}

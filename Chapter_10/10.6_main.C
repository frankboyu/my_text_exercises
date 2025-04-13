#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Move move1;
    move1.showmove();

    move1.reset(111,222);
    move1.showmove();

    Move move2(123, 321);
    move2.showmove();

    Move move3 = move1.add(move2);
    move3.showmove();

    return 0;
}
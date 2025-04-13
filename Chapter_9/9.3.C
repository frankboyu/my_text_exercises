#include <iostream>
#include <cstring>
#include <new>
using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];


int main()
{
    chaff * pd = new (buffer) chaff[2];
    strcpy(pd[0].dross, "trash");
    strcpy(pd[1].dross, "garbage");
    pd[0].slag = 42;
    pd[1].slag = 7;

    for (int i = 0; i < 2; i++)
        cout << pd[i].dross << ", " << pd[i].slag << endl;

    return 0;
}

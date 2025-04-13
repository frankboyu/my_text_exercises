#include <iostream>
using namespace std;

int main()
{
    float original = 100;
    float daphne = original;
    float cleo = original;
    int year = 0;

    do
    {
        daphne += 0.1*original;
        cleo += cleo*0.05;
        year += 1;
    } while (daphne > cleo);

    cout << "After " << year << " years, Cleo: " << cleo << ", Daphne: " << daphne << endl;

    return 0;
}
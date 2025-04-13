#include <iostream>

using namespace std;

void mice()
{
    cout << "Three blind mice" << endl;
    return;
}

void run()
{
    cout << "See how they run" << endl;
    return;
}

int main()
{
    mice();
    mice();
    run();
    run();

    return 0;
}
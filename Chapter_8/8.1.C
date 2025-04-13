#include <iostream>
using namespace std;

int print_times = 0;

void print_str(const char * this_string, const int count = 0)
{
    print_times++;
    if (count == 0)
        cout << this_string << endl;
    else
    {
        for (int i = 0; i < print_times; i++)
            cout << this_string << endl;
    }
}

int main()
{
    print_str("Test 1");
    print_str("Test 2", 5);
    print_str("Test 3");
    print_str("Test 4");
    print_str("Test 5", 5);
    print_str("Test 6", 0);

    return 0;
}

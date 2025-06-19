#include <iostream>
#include <algorithm>
using namespace std;

void show(int i);
int reduce(long ar[], int n);

int main()
{
    const int NUM = 7;
    long test[NUM] = {5,2,2,4,2,3,4};

    cout << "Original array: ";
    for_each(test, test+NUM, show);
    cout << endl;

    cout << "After being reduced: ";
    int new_n = reduce(test, NUM);
    for_each(test, test+new_n, show);
    cout << endl;

    return 0;
}

void show(int i)
{
    cout << i << " ";
}

int reduce(long ar[], int n)
{
    sort(ar, ar+n);
    long * new_end = unique(ar, ar+n);
    return new_end - ar;
}
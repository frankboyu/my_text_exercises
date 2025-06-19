#include <iostream>
#include <algorithm>
using namespace std;

void show(int i);
void show_string(string s);
template <class T>
int reduce(T ar[], int n);

int main()
{
    const int NUM = 7;
    // long test[NUM] = {5,2,2,4,2,3,4};
    string test[NUM] = {"apple", "banana", "apple", "orange", "banana", "kiwi", "kiwi"};

    cout << "Original array: ";
    // for_each(test, test+NUM, show);
    for_each(test, test+NUM, show_string);
    cout << endl;

    cout << "After being reduced: ";
    int new_n = reduce(test, NUM);
    // for_each(test, test+new_n, show);
    for_each(test, test+new_n, show_string);
    cout << endl;

    return 0;
}

void show(int i)
{
    cout << i << " ";
}

void show_string(string s)
{
    cout << s << " ";
}

template <class T>
int reduce(T ar[], int n)
{
    sort(ar, ar+n);
    T * new_end = unique(ar, ar+n);
    return new_end - ar;
}
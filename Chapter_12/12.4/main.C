#include <iostream>
#include <cctype> // or ctype.h
#include "header.h"
int main()
{
    using namespace std;
    Item temp;

    Stack st;
    cout << st.isempty() << endl;
    st.push(111);
    st.push(222);
    cout << st.isempty() << endl;

    Stack st2 = st;
    cout << st2.isempty() << endl;
    st2.pop(temp);
    st2.pop(temp);
    cout << st2.isempty() << endl;

    st = st2;
    cout << st.isempty() << endl;

    return 0;
}
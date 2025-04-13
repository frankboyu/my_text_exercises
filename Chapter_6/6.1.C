#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter some input: " << endl;

    while ((ch=cin.get()) != '@')
    {
        if      (isdigit(ch))
            continue;
        else if (isupper(ch))
            cout << char(tolower(ch));
        else if (islower(ch))
            cout << char(toupper(ch));
        else
            cout << ch;
    }

    cout << endl;

    return 0;
}
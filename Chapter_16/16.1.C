#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s;
    cout << "Enter a string, type q to quit: ";
    while(cin >> s && s != "q")
    {
        int i;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != s[s.size()-i-1])
                break;
        }
        if (i == s.size())
            cout << s << " is a palindrome." << endl;
        else
            cout << s << " is not a palindrome." << endl;
        cout << "Enter the next string: ";
    }
    cout << "Bye" << endl;

    return 0;
}


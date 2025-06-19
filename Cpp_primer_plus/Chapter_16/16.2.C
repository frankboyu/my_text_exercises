#include <iostream>
#include <string>
#include <algorithm>

bool NotAlphabet(char c)
{
    if(isalpha(c))
        return false;
    else
        return true;
}

char ToLower(char c)
{
    return tolower(c);
}

int main()
{
    using namespace std;
    string s, sr;
    cout << "Enter a string, type q to quit: ";
    while(getline(cin, s) && s != "q")
    {
        s.erase(remove_if(s.begin(), s.end(), NotAlphabet), s.end());
        transform(s.begin(), s.end(), s.begin(), ToLower);
        sr = s;
        reverse(sr.begin(), sr.end());
        if (s == sr)
            cout << s << " is a palindrome." << endl;
        else
            cout << s << " is not a palindrome." << endl;
        cout << "Enter the next string: ";
    }
    cout << "Bye" << endl;

    return 0;
}


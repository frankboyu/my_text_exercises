#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void string_to_upper(string & this_string)
{
    int i = 0;
    while(this_string[i] != '\0')
    {
        this_string[i] = toupper(this_string[i]);
        i++;
    }
}

int main()
{
    string input;
    cout << "Enter a string (q to quit): ";
    while(getline(cin, input))
    {
        if (input == "q")
        {
            cout << "Bye." << endl;
            break;
        }
        string_to_upper(input);
        cout << input << endl;
        cout << "Next string (q to quit): ";
    }

    return 0;
}

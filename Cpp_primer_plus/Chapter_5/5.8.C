#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[20];
    int count = 0;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;

    while (strcmp(word, "done"))
    {
        count += 1;
        cin.get();
        cin >> word;
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
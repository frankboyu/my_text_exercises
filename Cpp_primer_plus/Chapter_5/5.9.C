#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> word;

    while (word != "done")
    {
        count += 1;
        cin.get();
        cin >> word;
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
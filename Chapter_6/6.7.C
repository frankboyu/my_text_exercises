#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter words (q to quit):\n";
    string this_word;
    int n_vowels = 0, n_cosonants = 0, n_others = 0;
    while ((cin >> this_word) && (this_word != "q"))
    {
        if (isalpha(this_word[0]))
            switch (this_word[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                n_vowels++;
                break;
            default:
                n_cosonants++;
                break;
            }
        else
            n_others++;
    }
    cout << n_vowels << " words beginning with vowels\n";
    cout << n_cosonants << " words beginning with consonants\n";
    cout << n_others << " others\n";

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("list.txt");
    int count = 0;
    char this_char;

    inFile >> this_char;
    while (inFile.good())
    {
        count++;
        inFile >> this_char;
    }

    inFile.close();
    cout << "Number of characters in the file: " << count << endl;;

    return 0;
}
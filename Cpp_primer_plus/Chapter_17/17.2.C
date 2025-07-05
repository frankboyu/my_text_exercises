#include <iostream>
#include <fstream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ofstream;
    using std::string;

    string name;
    cout << "Enter name of the file: ";
    cin >> name;
    cin.get();
    ofstream fout(name.c_str());

    char ch;
    cout << "Enter input: ";
    while(cin.get(ch))
    {
        fout << ch;
    }
    return 0;
}
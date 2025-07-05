#include <iostream>
#include <fstream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ofstream;
    using std::ifstream;
    using std::string;

    string input_name, output_name;

    cout << "Enter name of the input file: ";
    cin >> input_name;
    cin.get();
    ifstream fin(input_name.c_str());
    if (!fin.good())
    {
        cout << "Can't open the input file. Exiting" << endl;
        return 1;
    }

    cout << "Enter name of the output file: ";
    cin >> output_name;
    cin.get();
    ofstream fout(output_name.c_str());
    if (!fout.good())
    {
        cout << "Can't open the output file. Exiting" << endl;
        return 1;
    }

    char ch;
    while(fin.get(ch))
    {
        fout << ch;
    }
    return 0;
}
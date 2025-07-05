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

    ifstream fin1("input1.txt");
    ifstream fin2("input2.txt");
    ofstream fout("output.txt");

    string line1, line2;

    while(!fin1.eof() && !fin2.eof())
    {
        getline(fin1, line1);
        getline(fin2, line2);
        fout << line1 << " " << line2 << endl;
    }

    if(fin1.eof())
    {
        while(!fin2.eof())
        {
            getline(fin2, line2);
            fout << line2 << endl;
        }
    }

    if(fin2.eof())
    {
        while(!fin1.eof())
        {
            getline(fin1, line1);
            fout << line1 << endl;
        }
    }

    return 0;
}
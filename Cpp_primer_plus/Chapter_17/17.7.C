#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void ShowStr(const string & s)
{
    cout << s << endl;
}

class Store
{
private:
    ofstream & fout;
public:
    Store(ofstream & this_fout) : fout(this_fout) {};
    void operator() (const string &);
};

void Store::operator() (const string & s)
{
    int len = s.size();
    fout.write((char *)&len, sizeof(int));
    fout.write(s.data(), len);
}

void GetStrs(ifstream & fin, vector<string> & vistr)
{
    int size = 0;
    string temp;
    while(fin.read((char*) &size, sizeof(int)))
    {
        temp.resize(size);
        fin.read(&temp[0], size);
        vistr.push_back(temp);
        temp.clear();
    }
}

int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;

    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin,temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}



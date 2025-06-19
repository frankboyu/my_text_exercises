#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void show(std::string s)
{
    using std::cout;
    cout << s << " ";
}

int main()
{
    using std::vector;
    using std::string;
    using std::for_each;
    using std::sort;
    using std::unique;
    using std::cout;
    using std::cin;
    using std::endl;

    string temp;

    vector<string> mat;
    cout << "Enter list of Mat's friends, q to quit: ";
    getline(cin, temp);
    while(temp != "q")
    {
        mat.push_back(temp);
        cout << "Enter next: ";
        getline(cin, temp);
    }
    sort(mat.begin(), mat.end());
    cout << "Mat's friends: ";
    for_each(mat.begin(), mat.end(), show);
    cout << endl;

    vector<string> pat;
    cout << "Enter list of Pat's friends, q to quit: ";
    getline(cin, temp);
    while(temp != "q")
    {
        pat.push_back(temp);
        cout << "Enter next: ";
        getline(cin, temp);
    }
    sort(pat.begin(), pat.end());
    cout << "Pat's friends: ";
    for_each(pat.begin(), pat.end(), show);
    cout << endl;

    vector<string> combined = mat;
    combined.insert(combined.end(), pat.begin(), pat.end());
    sort(combined.begin(), combined.end());
    auto new_end = unique(combined.begin(), combined.end());
    cout << "Combined list: ";
    for_each(combined.begin(), new_end, show);
    cout << endl;

    return 0;
}

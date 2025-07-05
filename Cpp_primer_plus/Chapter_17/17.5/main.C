#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main()
{
    using std::endl;
    using std::ofstream;
    using std::ifstream;
    using std::string;
    using std::vector;
    using std::sort;

    ifstream fmat("mat.dat");
    ifstream fpat("pat.dat");
    ofstream fout("matnpat.dat");

    string name;
    vector<string> mat, pat;

    while(!fmat.eof())
    {
        getline(fmat, name);
        mat.push_back(name);
    }
    sort(mat.begin(), mat.end());

    while(!fpat.eof())
    {
        getline(fpat, name);
        pat.push_back(name);
    }
    sort(pat.begin(), pat.end());

    vector<string> combined = mat;
    combined.insert(combined.end(), pat.begin(), pat.end());
    sort(combined.begin(), combined.end());
    auto new_end = unique(combined.begin(), combined.end());
    for (auto temp = combined.begin(); temp != new_end; temp++)
        fout << *temp << endl;

    return 0;
}
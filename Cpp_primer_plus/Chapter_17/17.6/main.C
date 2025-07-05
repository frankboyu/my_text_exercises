#include <iostream>
#include <cstdlib> // (for exit()
#include "header.h"

const char * file = "employees.txt";
const int MAX = 10;
int main()
{
    using namespace std;

    abstr_emp * pc[MAX];

    // show initial contents
    ifstream fin;
    fin.open(file);
    int i = 0;
    int classtype;
    char ch;
    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";

        while((fin >> classtype).get(ch))
        {
            switch(classtype)
            {
                case Employee : pc[i] = new employee;
                                break;
                case Manager :  pc[i] = new manager;
                                break;
                case Fink :     pc[i] = new fink;
                                break;
                case Highfink : pc[i] = new highfink;
                                break;
            }
            pc[i]->GetAll(fin);
            pc[i]->ShowAll();
            i++;
        }

        fin.close();
    }
    cout << endl;

    // add new names
    ofstream fout(file, ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }
    cout << "Add new employees: " << endl;
    cout << "Category (0:employee, 1:manager, 2:fink, 3: highfink, 4:quit): ";
    while((cin >> classtype).get(ch) && classtype != 4)
    {
        switch(classtype)
        {
            case Employee : pc[i] = new employee;
                            break;
            case Manager :  pc[i] = new manager;
                            break;
            case Fink :     pc[i] = new fink;
                            break;
            case Highfink : pc[i] = new highfink;
                            break;
            default:        pc[i] = nullptr;
        }
        pc[i]->SetAll();
        pc[i]->WriteAll(fout);
        i++;
        cout << "Category (0:employee, 1:manager, 2:fink, 3: highfink, 4:quit): ";
    }
    cout << endl;

    // show revised file
    fin.clear();
    fin.open(file);
    i = 0;
    if (fin.is_open())
    {
        cout << "Here are the new contents of the " << file << " file:\n";

        while((fin >> classtype).get(ch))
        {
            switch(classtype)
            {
                case Employee : pc[i] = new employee;
                                break;
                case Manager :  pc[i] = new manager;
                                break;
                case Fink :     pc[i] = new fink;
                                break;
                case Highfink : pc[i] = new highfink;
                                break;
            }
            pc[i]->GetAll(fin);
            pc[i]->ShowAll();
            i++;
        }

        fin.close();
    }

    cout << "Done.\n";

    return 0;
}
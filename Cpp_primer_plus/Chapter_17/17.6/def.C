#include "header.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

abstr_emp::abstr_emp() : fname("None"), lname("None"), job("None")
{
}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j) : fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter job: ";
    getline(cin, job);
}

void abstr_emp::WriteAll(std::ofstream & fout) const
{
    fout << fname << endl;
    fout << lname << endl;
    fout << job << endl;
}

void abstr_emp::GetAll(std::ifstream & fin)
{
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

ostream & operator<<(ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname;
    return os;
}

abstr_emp::~abstr_emp()
{
}

employee::employee() : abstr_emp()
{
}

employee::employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    cout << "Employee: " << endl;
    abstr_emp::ShowAll();
    cout << endl;
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

void employee::WriteAll(std::ofstream & fout) const
{
    fout << Employee << endl;
    abstr_emp::WriteAll(fout);
}

void employee::GetAll(std::ifstream & fin)
{
    abstr_emp::GetAll(fin);
}

manager::manager() : abstr_emp(), inchargeof(0)
{
}

manager::manager(const string & fn, const string & ln, const string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager & m) : abstr_emp(m), inchargeof(m.InChargeOf())
{
}

void manager::ShowAll() const
{
    cout << "Manager: " << endl;
    abstr_emp::ShowAll();
    cout << "In charge of " << inchargeof << " employees" << endl;
    cout << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter number of employees in charge of: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}

void manager::WriteAll(std::ofstream & fout) const
{
    fout << Manager << endl;
    abstr_emp::WriteAll(fout);
    fout << inchargeof << endl;
}

void manager::GetAll(std::ifstream & fin)
{
    abstr_emp::GetAll(fin);
    fin >> inchargeof;
    while (fin.get() != '\n' && !fin.eof())
        continue;
}

fink::fink() : abstr_emp(), reportsto("None")
{
}

fink::fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.ReportsTo())
{
}

void fink::ShowAll() const
{
    cout << "Fink: " << endl;
    abstr_emp::ShowAll();
    cout << "Reports to " << reportsto << endl;
    cout << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the person to report to: ";
    getline(cin, reportsto);
}

void fink::WriteAll(std::ofstream & fout) const
{
    fout << Fink << endl;
    abstr_emp::WriteAll(fout);
    fout << reportsto << endl;
}

void fink::GetAll(std::ifstream & fin)
{
    abstr_emp::GetAll(fin);
    getline(fin, reportsto);
}

highfink::highfink() : abstr_emp(), fink(), manager()
{
}

highfink::highfink(const string & fn, const string & ln, const string & j, const string & rpo, int ico) : abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico)
{
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : abstr_emp(e), fink(e, rpo), manager(e, ico)
{
}

highfink::highfink(const fink & f, int ico) : abstr_emp(f), fink(f), manager(f, ico)
{
}

highfink::highfink(const manager & m, const string & rpo) : abstr_emp(m), fink(m, rpo), manager(m)
{
}

highfink::highfink(const highfink & h) : abstr_emp(h), fink(h), manager(h)
{
}

void highfink::ShowAll() const
{
    cout << "Highfink: " << endl;
    abstr_emp::ShowAll();
    cout << "Reports to " << fink::ReportsTo() << endl;
    cout << "In charge of " << manager::InChargeOf() << " employees" << endl;
    cout << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the person to report to: ";
    getline(cin, fink::ReportsTo());
    cout << "Enter number of employees in charge of: ";
    cin >> manager::InChargeOf();
    while (cin.get() != '\n')
        continue;
}

void highfink::WriteAll(std::ofstream & fout) const
{
    fout << Highfink << endl;
    abstr_emp::WriteAll(fout);
    fout << fink::ReportsTo() << endl;
    fout << manager::InChargeOf() << endl;
}

void highfink::GetAll(std::ifstream & fin)
{
    abstr_emp::GetAll(fin);
    getline(fin, fink::ReportsTo());
    fin >> manager::InChargeOf();
    while (fin.get() != '\n' && !fin.eof())
        continue;
}
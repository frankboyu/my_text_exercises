#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <string>
#include <fstream>

enum classkind{Employee, Manager, Fink, Highfink}; // in class header

class abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;
public:
    abstr_emp();
    abstr_emp(const std::string & fn, const std::string & ln, const std::string & j);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void WriteAll(std::ofstream & fout) const;
    virtual void GetAll(std::ifstream & fin);
    friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e);
    virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp
{
public:
    employee();
    employee(const std::string & fn, const std::string & ln, const std::string & j);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void WriteAll(std::ofstream & fout) const;
    virtual void GetAll(std::ifstream & fin);
};

class manager: virtual public abstr_emp
{
private:
    int inchargeof; // number of abstr_emps managed
protected:
    int InChargeOf() const { return inchargeof; } // output
    int & InChargeOf(){ return inchargeof; } // input
public:
    manager();
    manager(const std::string & fn, const std::string & ln, const std::string & j, int ico = 0);
    manager(const abstr_emp & e, int ico);
    manager(const manager & m);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void WriteAll(std::ofstream & fout) const;
    virtual void GetAll(std::ifstream & fin);
};

class fink: virtual public abstr_emp
{
private:
    std::string reportsto; // to whom fink reports
protected:
    const std::string ReportsTo() const { return reportsto; }
    std::string & ReportsTo(){ return reportsto; }
public:
    fink();
    fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo);
    fink(const abstr_emp & e, const std::string & rpo);
    fink(const fink & e);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void WriteAll(std::ofstream & fout) const;
    virtual void GetAll(std::ifstream & fin);
};

class highfink: public manager, public fink // management fink
{
public:
    highfink();
    highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico);
    highfink(const abstr_emp & e, const std::string & rpo, int ico);
    highfink(const fink & f, int ico);
    highfink(const manager & m, const std::string & rpo);
    highfink(const highfink & h);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void WriteAll(std::ofstream & fout) const;
    virtual void GetAll(std::ifstream & fin);
};

#endif
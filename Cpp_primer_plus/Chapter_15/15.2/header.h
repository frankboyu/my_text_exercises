#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <stdexcept>

using std::logic_error;
using std::string;

class bad_hmean : public logic_error
{
private:
    double v1;
    double v2;
public:
    explicit bad_hmean(double a = 0, double b = 0, const string & s = "bad arguments to hmean()\n") : logic_error(s), v1(a), v2(b){}
    const char * what () { return "bad arguments to hmean()\n"; }
    void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 <<"): " << "invalid arguments: a = -b\n";
}

class bad_gmean : public logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0, const string & s = "bad arguments to gmean()\n") : logic_error(s), v1(a), v2(b){}
    const char * what () { return "bad arguments to gmean()\n"; }
    const char * mesg();
};

inline const char * bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}

#endif
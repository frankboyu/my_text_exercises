#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <stdexcept>

using std::logic_error;
using std::cout;
using std::endl;
using std::string;

class logic_error_with_values : public logic_error
{
protected:
    double v1;
    double v2;
public:
    explicit logic_error_with_values(double a = 0, double b = 0, const string & s = "logic errors with 2 values stored") : logic_error(s), v1(a), v2(b) {}
    const char * what () { return "logic errors with 2 values stored";}
    virtual void mesg() {cout << "Logic error with " << v1 << " and " << v2 << " stored." << endl;}
};

class bad_hmean : public logic_error_with_values
{
public:
    explicit bad_hmean(double a = 0, double b = 0, const string & s = "bad arguments to hmean()\n") : logic_error_with_values(a, b, s) {}
    void mesg() { cout << "hmean(" << logic_error_with_values::v1 << ", " << logic_error_with_values::v2 <<"): " << "invalid arguments: a = -b\n"; }
};

class bad_gmean : public logic_error_with_values
{
public:
    explicit bad_gmean(double a = 0, double b = 0, const string & s = "bad arguments to gmean()\n") : logic_error_with_values(a, b, s) {}
    void mesg() { cout << "gmean(" << logic_error_with_values::v1 << ", " << logic_error_with_values::v2 <<"): " << "invalid arguments: a < 0 or b < 0\n"; }
};

#endif
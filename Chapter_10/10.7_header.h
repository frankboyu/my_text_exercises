#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <cstring>
using namespace std;

class Betelgeusean_Plorg
{
private:
    static const int SIZE = 20;
    char name [SIZE];
    int CI;
public:
    Betelgeusean_Plorg();
    Betelgeusean_Plorg(const char * this_name, int this_CI);
    void set_CI(int this_CI);
    void show() const;
};

#endif
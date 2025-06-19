#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
using namespace std;

typedef double Item;

class List
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool add(const Item & item);
    void visit(void (*pf)(Item &));
};
#endif
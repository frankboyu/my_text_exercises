#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <string>
#include <valarray>

using std::string;
using std::valarray;
using std::cin;
using std::cout;
using std::endl;

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

class Wine
{
private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    string      name;
    int         years;
    PairArray   data;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    Wine();
    void GetBottles();
    const string & Label() const;
    int sum();
    void Show();
};

#endif
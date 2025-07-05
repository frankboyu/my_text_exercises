#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


void outint(int n) {std::cout << n << " ";}

int main()
{
    using std::list;
    using std::cout;
    using std::endl;

    auto outint = [](int n) {cout << n << " ";};

    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10); // range constructor
    list<int> etcetera(vals, vals + 10);

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if([](int n) {return n>100;});
    etcetera.remove_if([](int n) {return n>200;});
    // construct a function object
    cout <<"Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    return 0;
}









// Redo Listing 16.5 using lambdas. In particular, replace the outint() function with
// a named lambda and replace the two uses of a functor with two anonymous lambda
// expressions.
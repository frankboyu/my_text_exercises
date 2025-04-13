#include <iostream>
#include <cstring>

using namespace std;

class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char * this_fullname, int this_handicap);
    int Setgolf();
    void Set_handicap(int this_handicap);
    void Show() const;
};

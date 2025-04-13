#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy &this_stringy, const char this_string[])
{
    this_stringy.str = new char [strlen(this_string)];
    strcpy(this_stringy.str, this_string);
    this_stringy.ct = strlen(this_string);
    return;
}

void show(stringy this_stringy, int count = 1)
{
    for (int i = 0; i < count; i++)
        cout << this_stringy.str << endl;
    return;
}

void show(char this_string[], int count = 1)
{
    for (int i = 0; i < count; i++)
        cout << this_string << endl;
    return;
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

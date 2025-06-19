#include <iostream>
#include <cstring>
#include "header.h"

using namespace std;

Cow::Cow()
{
    cout << "Default!" << endl;
    strcpy(name, "None");
    hobby = new char [5];
    strcpy(hobby, "None");
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    cout << "Initialize!" << endl;
    strcpy(name, nm);
    hobby = new char [strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    cout << "Copy!" << endl;
    strcpy(name, c.name);
    hobby = new char [strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    cout << "Destroy!" << endl;
    delete hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    cout << "Assign!" << endl;
    if (this == &c)
        return *this;
    delete [] hobby;
    hobby = new char [strlen(c.hobby) + 1];
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
    weight = c.weight;

    return *this;
}

void Cow::ShowCow() const
{
    cout << "Cow: " << name << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Weight: " << weight << endl;
}
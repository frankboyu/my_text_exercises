#include "header.h"
#include <cstring>
#include <iostream>

using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performers, "None");
    strcpy(label, "None");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

void Cd::Report() const
{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Play time: " << playtime << endl;
}

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s2, s3, n, x)
{
    strcpy(primarywork, s1);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    strcpy(primarywork, c.primarywork);
}

Classic::Classic() : Cd()
{
    strcpy(primarywork, "None");
}

Classic::~Classic()
{
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;
    strcpy(primarywork, c.primarywork);
    Cd::operator=(c);
    return *this;
}

void Classic::Report() const
{
    cout << "Primary work: " << primarywork << endl;
    Cd::Report();
}
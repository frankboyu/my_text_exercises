#include "header.h"
#include <cstring>
#include <iostream>

using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    label = new char[strlen(s2)+1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[5];
    label = new char[5];
    strcpy(performers, "None");
    strcpy(label, "None");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
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
    primarywork = new char [strlen(s1)+1];
    strcpy(primarywork, s1);
}

Classic::Classic(const Classic & c) : Cd(c)
{
    primarywork = new char [strlen(c.primarywork)+1];
    strcpy(primarywork, c.primarywork);
}

Classic::Classic() : Cd()
{
    primarywork = new char [5];
    strcpy(primarywork, "None");
}

Classic::~Classic()
{
    delete [] primarywork;
}

Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;
    delete [] primarywork;
    primarywork = new char [strlen(c.primarywork)+1];
    strcpy(primarywork, c.primarywork);
    Cd::operator=(c);
    return *this;
}

void Classic::Report() const
{
    cout << "Primary work: " << primarywork << endl;
    Cd::Report();
}
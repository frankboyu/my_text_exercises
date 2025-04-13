#ifndef HEADER_H_
#define HEADER_H_

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    Cd & operator=(const Cd & d);
    virtual void Report() const;
};

class Classic : public Cd
{
private:
    char primarywork[50];
public:
    Classic(char * s1 , char * s2, char * s3, int n, double x);
    Classic(const Classic & c);
    Classic();
    ~Classic();
    Classic & operator=(const Classic & c);
    void Report() const;
};

#endif
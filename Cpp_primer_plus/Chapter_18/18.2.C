#include <iostream>
#include <string>

using namespace std;

class Cpmv
{
public:
    struct Info
    {
    std::string qcode;
    std::string zcode;
    };
private:
    Info *pi;
public:
    Cpmv();
    Cpmv(std::string q, std::string z);
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && mv);
    ~Cpmv();
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv);
    Cpmv operator+(const Cpmv & obj) const;
    void Display() const;
};

Cpmv::Cpmv()
{
    cout << "Default constructor used" << endl;
    pi = new Info {"N/A", "N/A"};
}

Cpmv::Cpmv(std::string q, std::string z)
{
    cout << "String string constructor used" << endl;
    pi = new Info {q, z};
}

Cpmv::Cpmv(const Cpmv & cp)
{
    cout << "Copy constructor used" << endl;
    pi = new Info {(*cp.pi).qcode, (*cp.pi).zcode};
}

Cpmv::Cpmv(Cpmv && mv)
{
    cout << "Move constructor used" << endl;
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
    cout << "Destructor used" << endl;
    delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
    cout << "Copy assignment operator used" << endl;
    if (this == &cp)
        return *this;
    delete pi;
    pi = new Info {(*cp.pi).qcode, (*cp.pi).zcode};
    return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
    cout << "Move assignment operator used" << endl;
    if (this == &mv)
        return *this;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    cout << "Addidtion operator used" << endl;
    return Cpmv((*pi).qcode+(*obj.pi).qcode, (*pi).zcode+(*obj.pi).zcode);
}

void Cpmv::Display () const
{
    cout << "q code: " << pi->qcode << ", zcode: " << pi->zcode << endl;
}

int main()
{
    Cpmv test1 = {};
    test1.Display();

    Cpmv test2 = {"qqq", "zzz"};
    test2.Display();

    Cpmv test3 = test2;
    test3.Display();

    Cpmv test4(test2+test3);
    test4.Display();

    test4 = test2;
    test4.Display();

    test4 = test2+test3;
    test4.Display();

    return 0;
}
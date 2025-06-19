#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;
}

// 1. Because the element-wise assignment used by the default assignment operator works well enough with data members (int and string type) having meaningful assignment operators
// 2. Because different children classes will have to re-define those methods to show or set different data members
// 3. So that derived classes will only have one copy of first name and last name objects
// 4. Because all data members are derived from base classes
// 5. Because pointers of children classes can be type cast to base class pointer implicitly
// 6. They will all use the base class ShowAll methods and therefore only display first name, last name and job.
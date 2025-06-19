#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Student No. " << i+1 << endl;
        cout << "Full name: ";
        if (!(cin.getline(pa[i].fullname, SLEN)))
        {
            cin.clear();
            cout << "Terminating...\n";
            break;
        }
        cout << "Hobby: ";
        cin >> pa[i].hobby;
        cin.get();
        cout << "OOP level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << "Student full name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP level: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "Student full name: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "OOP level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student No. " << i+1 << ": " << pa[i].fullname << ", " << pa[i].hobby << ", " << pa[i].ooplevel << endl;
    }
}

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

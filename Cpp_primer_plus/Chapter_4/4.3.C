#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first_name[10];
    char last_name[10];
    char full_name[20];

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}
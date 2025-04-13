#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    cout << "What is your first name? ";
    getline(cin, first_name);

    string last_name;
    cout << "What is your last name? ";
    getline(cin, last_name);

    char letter_grade;
    cout << "What letter grade do you deserve? ";
    cin >> letter_grade;
    letter_grade += 1;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << letter_grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
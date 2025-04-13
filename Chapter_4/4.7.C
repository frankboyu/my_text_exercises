#include <iostream>
#include <string>

using namespace std;

struct pizza
{
    string name;
    float diameter;
    float weight;
};

int main()
{
    pizza myPizza;

    cout << "Enter the name of pizza company: ";
    getline(cin, myPizza.name);

    cout << "Enter the diameter of the pizza: ";
    cin >> myPizza.diameter;

    cout << "Enter the weight of the pizza: ";
    cin >> myPizza.weight;

    cout << "Name: " << myPizza.name << endl;
    cout << "Diameter: " << myPizza.diameter << endl;
    cout << "Weight: " << myPizza.weight << endl;

    return 0;
}
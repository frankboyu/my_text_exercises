// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream output_file("output.txt");

    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        output_file << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        output_file << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            output_file << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;

        output_file << "After " << steps << " steps, the subject "
            "has the following location:\n";
        output_file << result << endl;
        result.polar_mode();
        output_file << " or\n" << result << endl;
        output_file << "Average outward distance per step = "
            << result.magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
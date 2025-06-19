// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int trials;
    int step_max, step_min;
    double step_avg;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter number of trials: ";
        if (!(cin >> trials))
            break;

        for (int i = 0; i < trials; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            if (i == 0)
            {
                step_max = step_min = step_avg = steps;
            }
            else
            {
                step_max = (step_max >= steps) ? step_max : steps;
                step_min = (step_min <= steps) ? step_min : steps;
                step_avg += steps;
            }

            steps = 0;
            result.reset(0.0, 0.0);
        }
        step_avg /= trials;

        cout << "Highest number: " << step_max << endl;
        cout << "Lowest number: " << step_min << endl;
        cout << "Average number: " << step_avg << endl;

        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
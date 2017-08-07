#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

int main() {
    using VECTOR::Vector;
    srand((unsigned int)time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    std::ofstream file;
    file.open("output.txt");
    std::cout << "Input distance to travel (q to end): ";
    while (std::cin >> target) {
        std::cout << "Input step length: ";
        if (!(std::cin >> dstep)) {
            break;
        }
        file << "Distance to travel " << target << ", step length " << dstep << ".\n";
        while (result.getMag() < target) {
            file << steps << ": " << result << "\n";
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        file << steps << ": " << result << "\n";

        file << "After " << steps << " steps drunk man achieved position " << result;
        result.setPolarMode();
        file << ", so " << result << ".\n";
        file << "Average length of apparent step is " << result.getMag() / steps << ".\n";
        result.reset(0.0, 0.0);

        std::cout << "Input distance to travel (q to end): ";
    }
    file.close();
    return 0;
}
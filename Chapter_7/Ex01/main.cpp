#include <iostream>

double harmonicMean(double x, double y);
void clearCin();

int main() {
    double x, y;
    x = y = 1;
    std::cout << "Input numbers, 0 ends program." << std::endl;
    while (true) {
        std::cout << "Input number x: ";
        std::cin >> x;
        std::cout << "Input number y: ";
        std::cin >> y;
        if (!std::cin) {
            clearCin();
            continue;
        }
        if (x == 0 || y == 0) {
            break;
        }
        std::cout << "Harmonic mean of " << x << " and " << y << " is " << harmonicMean(x, y) << ".\n";
    }
    return 0;
}

double harmonicMean(double x, double y) {
    return 2.0 * x * y / (x + y);
}

void clearCin() {
    std::cin.clear();
    while (std::cin.get() != '\n'){
        ;
    }
    std::cout << "Wrong input, try again!" << std::endl;
}
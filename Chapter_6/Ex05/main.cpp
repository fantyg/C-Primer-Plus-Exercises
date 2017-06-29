#include <iostream>

int main() {
    int money;
    std::cout << "How much do you earn (in twarps): ";

    std::cin >> money;
    if (!std::cin.good() || money < 0) {
        std::cout << "Wrong input!\nEnd of work." << std::endl;
        exit(EXIT_FAILURE);
    }

    double tax = 0;
    const int THRESHOLDS_SIZE = 4;
    const int THRESHOLDS[THRESHOLDS_SIZE] = {
            5000, 10000, 20000, 35000
    };
    const double TAXES[THRESHOLDS_SIZE] = {
            .0, .1, .15, .2
    };

    int i = 0;
    while (i < THRESHOLDS_SIZE - 1 && money >= THRESHOLDS[i]) {
        tax += THRESHOLDS[i] * TAXES[i];
        money -= THRESHOLDS[i];
        ++i;
    }

    tax += TAXES[i] * money;
    std::cout << "You should pay " << int(tax) << " twarps tax." << std::endl;
    return 0;
}
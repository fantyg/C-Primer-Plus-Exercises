#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned superNumber);

int main() {
    unsigned total, choices, superTotal;
    std::cout << "Input the biggest number you can choose, how much numbers you can"
            " pick and the biggest super number:\n";
    while ((std::cin >> total >> choices >> superTotal) && choices <= total) {
        std::cout << "Win probability is one to " << probability(total, choices, superTotal)
                  << ".\nNext 3 numbers (input q to end).";
    }
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned superNumber) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; --n, --p) {
        result = result * n / p;
    }

    return result * superNumber;
}
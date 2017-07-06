#include <iostream>

double calculate(double a, double b, double (*func)(double, double));

double add(double a, double b);

double multiply(double a, double b);

int main() {
    const int FUNCTION_COUNT = 2;
    double (*const pf[2])(double, double) = {multiply, add};
    const std::string NAMES[FUNCTION_COUNT] = {"multiply", "add"};

    double a, b;
    std::cout << "Input pair of numbers (not a number ends input):\n";
    while (std::cin >> a >> b) {
        for (int i = 0; i < FUNCTION_COUNT; ++i) {
            std::cout << "Result of " << NAMES[i] << " on " << a << " and " << b << " is "
                      << calculate(a, b, pf[i]) << ".\n";
        }
        std::cout << "Enter next pair:\n";
    }
    return 0;
}

double calculate(double a, double b, double (*func)(double, double)) {
    return func(a, b);
}

double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}


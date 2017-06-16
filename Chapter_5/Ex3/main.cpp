#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "This program counts sum of numbers." << std::endl;
    std::cout << "Give me number (0 end program): ";
    std::cin >> number;
    while (number != 0) {
        sum += number;
        std::cout << "Current sum is " << sum << ".\nGive me next number: ";
        std::cin >> number;
    }
    std::cout << "At the end sum is " << sum << "." << std::endl;
    return 0;
}
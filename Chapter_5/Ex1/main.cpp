#include <iostream>

//
int main() {
    int first, second;

    std::cout << "Give me some decimal number: ";
    std::cin >> first;
    std::cout << "Give me other decimal number (bigger then previous): ";
    std::cin >> second;

    int sum = 0;
    for (int i = first; i <= second; ++i) {
        sum += i;
    }

    std::cout << "Sum from " << first
              << " to " << second
              << " is " << sum
              << "." << std::endl;

    return 0;
}
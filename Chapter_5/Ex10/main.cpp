#include <iostream>

void printDots(int howMany);

void printStars(int howMany);

int main() {
    int numberOfRows;

    std::cout << "Input number of rows: ";
    std::cin >> numberOfRows;
    for (int i = 1; i <= numberOfRows; ++i) {
        printDots(numberOfRows - i);
        printStars(i);
        std::cout << std::endl;
    }
    return 0;
}

void printDots(int howMany) {
    for (int i = 0; i < howMany; ++i) {
        std::cout << ".";
    }
}

void printStars(int howMany) {
    for (int i = 0; i < howMany; ++i) {
        std::cout << "*";
    }
}
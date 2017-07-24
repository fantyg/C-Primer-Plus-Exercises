#include <iostream>

int main() {
    std::string name;
    std::string dessert;

    std::cout << "Tell me your name: ";
    getline(std::cin, name);
    std::cout << "Tell me your favorite dessert: ";
    getline(std::cin, dessert);
    std::cout << "I've got "
              << dessert
              << " for you, "
              << name
              << ".\n";
    return 0;
}
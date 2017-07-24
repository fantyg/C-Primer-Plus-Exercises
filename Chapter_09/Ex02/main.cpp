#include <iostream>

void strcount(const std::string &str);

int main() {
    std::string input;

    std::cout << "Input row:\n";
    getline(std::cin, input);
    while (input.compare("")) {
        strcount(input);
        std::cout << "Input next row (empty row ends input):\n";
        getline(std::cin, input);
    }

    std::cout << "End\n";
    return 0;
}

void strcount(const std::string &str) {
    static int total = 0;

    std::cout << "\"" << str << "\" contains " << str.size() << " signs.\n";
    total += str.size();
    std::cout << "Altogether " << total << " signs.\n";
}
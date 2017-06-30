#include <iostream>
#include <fstream>

void checkCin();

int main() {
    std::string fileName;

    std::cout << "Input file name: ";
    getline(std::cin, fileName);
    checkCin();
    std::ifstream fileInputStream;

    fileInputStream.open(fileName);
    if(!fileInputStream.is_open()) {
        std::cout << "Can't open file " << fileName << "." << std::endl;
        exit(EXIT_FAILURE);
    }
    int counter = 0;
    char temp;
    while (fileInputStream.get(temp)) {
        ++counter;
    }
    fileInputStream.close();
    std::cout << "This file has " << counter << " signs.";
    return 0;
}

void checkCin() {
    if (!std::cin.good()) {
        std::cout << "Wrong input!" << std::endl;
        exit(EXIT_FAILURE);
    }
}
#include <iostream>
#include <fstream>

struct Donator {
    std::string lastName;
    int donate;
};

void checkInput(std::istream &input);

int main() {
    const int greatnessLimit = 10000;
    std::string fileName;
    int donatorCount;

    std::cout << "Hi, input name of file with donators: ";
    getline(std::cin, fileName);
    checkInput(std::cin);

    std::ifstream file;
    file.open(fileName);
    if(!file.is_open()) {
        std::cout << "There is no file " << fileName << "." << std::endl;
        exit(EXIT_FAILURE);
    }
    file >> donatorCount;
    file.get();
    checkInput(file);
    Donator *donators = new Donator[donatorCount];
    for (int i = 0; i < donatorCount; ++i) {
        getline(file, donators[i].lastName);
        checkInput(file);
        file >> donators[i].donate;
        file.get();
        checkInput(file);
    }
    file.close();

    std::cout << "Our Great Donators: " << std::endl;
    for (int i = 0; i < donatorCount; ++i) {
        if (donators[i].donate >= greatnessLimit) {
            std::cout << "\t" << donators[i].lastName << std::endl;
        }
    }

    std::cout << "Our Donators: " << std::endl;
    for (int i = 0; i < donatorCount; ++i) {
        if (donators[i].donate < greatnessLimit) {
            std::cout << "\t" << donators[i].lastName << std::endl;
        }
    }
    return 0;
}

void checkInput(std::istream &input) {
    if (!input.good()) {
        std::cout << "Wrong input!" << std::endl;
        exit(EXIT_FAILURE);
    }
}
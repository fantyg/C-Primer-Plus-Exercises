#include <iostream>

struct Donator {
    std::string lastName;
    int donate;
};

void checkCin();

int main() {
    const int greatnessLimit = 10000;
    int donatorCount;
    std::cout << "Hi, how many donators do you want to input: ";
    std::cin >> donatorCount;
    checkCin();
    Donator *donators = new Donator[donatorCount];
    for (int i = 0; i < donatorCount; ++i) {
        std::cout << "#" << i + 1 << " donator:" << std::endl
                  << "\tInput last name: ";
        std::cin >> donators[i].lastName;
        checkCin();
        std::cout << "\tInput high of donate: ";
        std::cin >> donators[i].donate;
        checkCin();
    }

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

void checkCin() {
    if (!std::cin.good()) {
        std::cout << "Wrong input!" << std::endl;
        exit(EXIT_FAILURE);
    }
}
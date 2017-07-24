#include <iostream>

struct car {
    std::string brand;
    int year;
};

int main() {
    int howMany;
    car *cars;

    std::cout << "How many cars would you like to catalog? " << std::endl;
    std::cin >> howMany;
    std::cin.get();
    cars = new car[howMany];
    for (int i = 0; i < howMany; ++i) {
        std::cout << "Car #" << i + 1 << ":" << std::endl;
        std::cout << "\tBrand: ";
        getline(std::cin, cars[i].brand);
        std::cout << "\tYear: ";
        std::cin >> cars[i].year;
        std::cin.get();
    }
    for (int i = 0; i < howMany; ++i) {
        std::cout << cars[i].year << " " << cars[i].brand << std::endl;
    }
    return 0;
}
#include <iostream>

struct CandyBar {
    std::string brandName;
    float weight;
    int calories;
};

int main() {
    CandyBar snack{"Mocha Munch", 2.3f, 350};
    std::cout << "Candy bar brand: "
              << snack.brandName
              << ", weight: "
              << snack.weight
              << ", calories: "
              << snack.calories
              << "."
              << std::endl;
    return 0;
}
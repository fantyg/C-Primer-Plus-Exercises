#include <iostream>

struct CandyBar {
    std::string brandName;
    float weight;
    int calories;
};

int main() {
    const size_t CANDY_BARS_SIZE = 3;
    CandyBar candyBars[CANDY_BARS_SIZE]{
            {"Snikers", 1.1f, 320},
            {"Mars", .6f, 300},
            {"Kinder Bueno", .5f, 260}};
    
    std::cout << "Candy bar brand: "
              << candyBars[0].brandName
              << ", weight: "
              << candyBars[0].weight
              << ", calories: "
              << candyBars[0].calories
              << "."
              << std::endl;

    std::cout << "Candy bar brand: "
              << candyBars[1].brandName
              << ", weight: "
              << candyBars[1].weight
              << ", calories: "
              << candyBars[1].calories
              << "."
              << std::endl;

    std::cout << "Candy bar brand: "
              << candyBars[2].brandName
              << ", weight: "
              << candyBars[2].weight
              << ", calories: "
              << candyBars[2].calories
              << "."
              << std::endl;
    return 0;
}
#include <iostream>

struct Pizza {
    std::string brand;
    int diameter;
    float weight;
};

int main() {
    Pizza *pizza = new Pizza;

    std::cout << "Pizzas diameter: ";
    std::cin >> pizza->diameter;
    std::cin.get();
    std::cout << "Pizzas brand: ";
    getline(std::cin, pizza->brand);
    std::cout << "Pizzas weight: ";
    std::cin >> pizza->weight;

    std::cout << "Brand: "
              << pizza->brand
              << ", diameter: "
              << pizza->diameter
              << ", weight: "
              << pizza->weight
              << "."
              << std::endl;

    return 0;
}
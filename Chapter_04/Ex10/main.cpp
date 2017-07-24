#include <iostream>
#include <array>

int main() {
    std::array<double, 3> times;

    std::cout << "First sprint time: ";
    std::cin >> times[0];
    std::cout << "Second sprint time: ";
    std::cin >> times[1];
    std::cout << "Third sprint time: ";
    std::cin >> times[2];

    std::cout << "Average: "
              << (times[0] + times[1] + times[2]) / 3.
              << "."
              << std::endl;
    return 0;
}
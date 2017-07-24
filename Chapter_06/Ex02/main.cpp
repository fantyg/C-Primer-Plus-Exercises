#include <iostream>
#include <array>

int main() {
    const int HOW_MANY = 10;
    std::array<double, HOW_MANY> arr;

    std::cout << "Input " << HOW_MANY << " donates." << std::endl;
    int count = 0;
    std::cout << count + 1 << " donate: ";
    while (std::cin >> arr[count]) {
        std::cout << count + 1 << " donate: ";
        ++count;
    }

    double sum = .0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }
    std::cout << "Average is " << sum / count << "." << std::endl;
    return 0;
}
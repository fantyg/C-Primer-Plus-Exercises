#include <iostream>
#include <array>

int main() {
    const int ARRAY_SIZE = 101;
    std::array<long double, ARRAY_SIZE> factorials;

    factorials[0] = factorials[1] = 1.0L;
    for (int i = 2; i < factorials.size(); ++i) {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < factorials.size(); ++i) {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
}
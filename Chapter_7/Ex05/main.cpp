#include <iostream>

unsigned long long factorial(int n);

int main() {
    std::cout << "Input numbers (q ends): ";
    int n;
    while (std::cin >> n) {
        std::cout << "Factorial of " << n << " is " << factorial(n) << ".\nNext number: ";
    }
    return 0;
}

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return  factorial(n - 1) * n;
}
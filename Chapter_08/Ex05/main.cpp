#include <iostream>

template<typename T>
T max5(const T arr[]);

int main() {
    const double arrD[] = {1.0, 8.5, 5., 4.4, 0.1};
    const int arrI[] = {4, 65, 7, 66, 56, 41};
    std::cout << max5(arrD) << "\n";
    std::cout << max5(arrI) << "\n";
    return 0;
}

template<typename T>
T max5(const T arr[]) {
    const size_t ARRAY_SIZE = 5;
    T max = arr[0];
    for (int i = 1; i < ARRAY_SIZE; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
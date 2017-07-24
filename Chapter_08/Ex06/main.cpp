#include <iostream>
#include <cstring>

template<typename T>
T maxn(T arr[], int n);

template<>
const char *maxn(const char *arr[], int n);

int main() {
    int INT_SIZE = 4;
    int arrI[INT_SIZE] = {4, 2, 3, 1};
    int DOUBLE_SIZE = 5;
    double arrD[DOUBLE_SIZE] = {4.1, 2.3, 3.3, 1.1, 8.8};
    int CHAR_SIZE = 5;
    const char *arrC[] = {"Ala", "has not", "cat and....", "cat", "has Ala."};
    std::cout << maxn(arrI, INT_SIZE) << std::endl;
    std::cout << maxn(arrD, DOUBLE_SIZE) << std::endl;
    std::cout << maxn(arrC, CHAR_SIZE) << std::endl;
    return 0;
}

template<>
const char *maxn(const char *arr[], int n) {
    const char *max = *(arr++);
    size_t maxSize = strlen(max);
    while (--n > 0) {
        if (strlen(*arr) > maxSize) {
            max = *arr;
            maxSize = strlen(*arr);
        }
        ++arr;
    }
    return max;
}

template<typename T>
T maxn(T arr[], int n) {
    T max = *(arr++);
    while (--n > 0) {
        if (max < *arr) {
            max = *arr;
        }
        ++arr;
    }
    return max;
}


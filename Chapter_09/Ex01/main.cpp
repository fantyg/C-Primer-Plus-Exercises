#include <iostream>
#include <cstring>
#include "golf.h"

int main() {
    const int SIZE = 5;
    golf arr[SIZE];
    std::cout << "Input up to " << SIZE << " golf players (empty name ends input).\n";
    int actualSize = 0;
    do {
        setgolf(arr[actualSize]);
    } while (strcmp(arr[actualSize].fullname, "") && std::cin && ++actualSize < SIZE);

    setgolf(arr[0], "Robert Heap", 10);
    handicap(arr[1], 145);
    std::cout << "Your input: \n";
    for (int i = 0; i < actualSize; ++i) {
        showgolf(arr[i]);
    }

    std::cout << "It is OK, right?\n";
    return 0;
}
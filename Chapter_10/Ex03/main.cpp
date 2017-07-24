#include <iostream>
#include <cstring>
#include "Golf.h"

int main() {
    const int SIZE = 5;
    Golf *arr[SIZE];
    std::cout << "Input up to " << SIZE << " golf players (empty name ends input).\n";
    int actualSize = 0;
    do {
        arr[actualSize] = new Golf();
    } while (strcmp(arr[actualSize]->m_fullname, "") && std::cin && ++actualSize < SIZE);

    delete arr[0];

    arr[0] = new Golf("Robert Heap", 10);
    arr[1]->setHendicap(0);
    std::cout << "Your input: \n";
    for (int i = 0; i < actualSize; ++i) {
        arr[i]->show();
        delete arr[i];
    }

    std::cout << "It is OK, right?\n";
    return 0;
}
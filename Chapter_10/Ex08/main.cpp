#include <iostream>
#include "List.h"

void addOne(Item &i) {
    i += 1;
}

void print(Item &i) {
    std::cout << i << ", ";
}

int main() {
    List l;
    std::cout << l.isEmpty() << "\n";
    l.forEach(addOne);
    l.add(1);
    l.add(2);
    l.add(3);
    l.add(4);
    l.forEach(print);
    std::cout << "\n";
    l.forEach(addOne);
    l.forEach(print);
    std::cout << "\n";
    std::cout << l.isEmpty() << "\n";
    return 0;
}
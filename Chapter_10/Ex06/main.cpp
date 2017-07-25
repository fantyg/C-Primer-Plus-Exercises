#include <iostream>
#include "Move.h"

int main() {
    const Move m1;
    const Move m2(1.0);
    const Move m3(2.0, 3.0);
    Move m4 = m2.add(m3);
    m1.showMove();
    std::cout << "\n";
    m2.showMove();
    std::cout << "\n";
    m3.showMove();
    std::cout << "\n";
    m4.showMove();
    std::cout << "\n";
    m4.reset(5.0, 5.0);
    m4.showMove();
    std::cout << "\n";
    return 0;
}
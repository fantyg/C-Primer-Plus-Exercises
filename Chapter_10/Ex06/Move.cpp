//
// Created by fantyg on 25.07.17.
//

#include "Move.h"
#include <iostream>

Move::Move(double a, double b) : x(a), y(b) {}

Move Move::add(const Move &m) const {
    Move result(x, y);
    result.x += m.x;
    result.y += m.y;
    return result;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}

void Move::showMove() const {
    std::cout << x << ", " << y;
}
//
// Created by fantyg on 25.07.17.
//

#include "Plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char *name) {
    strncpy(m_name, name, NAME_MAX);
    m_repletion = 50;
}

void Plorg::setReplatation(int r) {
    m_repletion = r;
}

void Plorg::show() const {
    std::cout << "Name: " << m_name << ", repletion: " << m_repletion << "\n";
}

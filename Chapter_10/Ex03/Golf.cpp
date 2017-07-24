//
// Created by fantyg on 24.07.17.
//

#include "Golf.h"
#include <cstring>
#include <iostream>

Golf::Golf(const char *name, int hc) {
    strncpy(m_fullname, name, LEN);
    m_handicap = hc;
}

Golf::Golf() {
    std::cout << "Input full name: ";
    std::cin.getline(m_fullname, LEN);
    if (!strcmp(m_fullname, "")) {
        return;
    }
    std::cout << "Input handicap: ";
    std::cin >> m_handicap;
    std::cin.get();
}

void Golf::show() {
    std::cout << "Name: " << m_fullname << "\n"
              << "Handicap: " << m_handicap << "\n";
}

void Golf::setHendicap(int hc) {
    m_handicap = hc;
}
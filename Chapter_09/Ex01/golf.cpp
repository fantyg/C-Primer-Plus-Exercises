//
// Created by fantyg on 17.07.17.
//

#include <cstring>
#include <iostream>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc) {
    strncpy(g.fullname, name, Len);
    g.handicap = hc;
}

void setgolf(golf &g) {
    std::cout << "Input full name: ";
    std::cin.getline(g.fullname, Len);
    if (!strcmp(g.fullname, "")) {
        return;
    }
    std::cout << "Input handicap: ";
    std::cin >> g.handicap;
    std::cin.get();
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    std::cout << "Name: " << g.fullname << "\n"
              << "Handicap: " << g.handicap << "\n";
}
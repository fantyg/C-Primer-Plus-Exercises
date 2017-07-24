//
// Created by fantyg on 24.07.17.
//

#include "Person.h"
#include <cstring>
#include <iostream>

Person::Person(const std::string &ln, const char *fn) {
    lName = ln;
    strncpy(fName, fn, LIMIT);
}

void Person::show() const {
    std::cout << fName << " " << lName << "\n";
}

void Person::formalShow() const {
    std::cout << lName << " " << fName << "\n";
}
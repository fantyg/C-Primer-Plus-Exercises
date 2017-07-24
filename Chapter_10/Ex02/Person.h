//
// Created by fantyg on 24.07.17.
//

#ifndef EX02_PERSON_H
#define EX02_PERSON_H

#include <string>

class Person {
private:
    static const int LIMIT = 256;
    std::string lName;
    char fName[LIMIT];

public:
    Person() {
        lName = "";
        fName[0] = '\0';
    }

    Person(const std::string &ln, const char *fn = "HeyYou");

    void show() const;

    void formalShow() const;
};


#endif //EX02_PERSON_H

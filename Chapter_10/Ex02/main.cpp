#include "Person.h"

int main() {
    Person one;
    Person two("Snow");
    Person three("Stark", "Arya");
    one.show();
    one.formalShow();
    two.show();
    two.formalShow();
    three.show();
    three.formalShow();
    return 0;
}
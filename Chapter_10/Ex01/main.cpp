#include <iostream>
#include "BankAccount.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    BankAccount b1("Jan Kowalski", "2025482357885564258", 10000.);
    BankAccount b2("Maria Konopnicka", "518044684530104");
    b1.show();
    b2.show();
    b2.giveMoney(b1.takeMoney(1000.10));
    b1.show();
    b2.show();
    b1.giveMoney(b2.takeMoney(2000.));
    b1.show();
    b2.show();
    return 0;
}
#include <iostream>
#include "Plorg.h"

int main() {
    Plorg p;
    p.show();
    p.setReplatation(10);
    p.show();
    p = Plorg("Not Plorga");
    p.show();
    return 0;
}
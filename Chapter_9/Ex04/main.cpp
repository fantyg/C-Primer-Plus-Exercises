#include <iostream>
#include "sales.h"

int main() {
    SALES::Sales s1;
    SALES::Sales s2;
    SALES::setSales(s1);
    const int ARR_SIZE = 5;
    const double sales[ARR_SIZE] = {158.1, 4684684., 8648.97, 8648.49, 68468.1};
    SALES::setSales(s2, sales, ARR_SIZE);
    SALES::showSales(s1);
    SALES::showSales(s2);
    return 0;
}
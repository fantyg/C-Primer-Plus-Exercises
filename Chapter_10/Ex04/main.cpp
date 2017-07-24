#include <iostream>
#include "Sales.h"
int main() {
    const int ARR_SIZE = 5;
    const double sales[ARR_SIZE] = {158.1, 4684684., 8648.97, 8648.49, 68468.1};
    SALES::Sales s1;
    SALES::Sales s2(sales, ARR_SIZE);
    s1.show();
    s2.show();
    return 0;
}
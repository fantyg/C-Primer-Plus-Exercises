#include <iostream>
#include <string>


int main() {
    const int MONTH_COUNTS = 12;
    std::string months[MONTH_COUNTS] = {
            "January", "February", "March", "April", "May", "Jun",
            "July", "August", "September", "October", "November", "December"
    };
    int sales[MONTH_COUNTS];
    int sum = 0;

    for (int i = 0; i < MONTH_COUNTS; ++i) {
        std::cout << "Give number of sales for " << months[i] << ": ";
        std::cin >> sales[i];
    }

    for (int i = 0; i < MONTH_COUNTS; ++i) {
        sum += sales[i];
    }

    std::cout << "Total year number of sales is " << sum << "." << std::endl;
    return 0;
}
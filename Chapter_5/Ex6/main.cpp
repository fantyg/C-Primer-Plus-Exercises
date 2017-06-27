#include <iostream>
#include <string>

int main() {
    const int MONTH_COUNTS = 12;
    const int YEARS_COUNT = 3;
    std::string months[MONTH_COUNTS] = {
            "January", "February", "March", "April", "May", "Jun",
            "July", "August", "September", "October", "November", "December"
    };
    int sales[MONTH_COUNTS][YEARS_COUNT];
    int sum = 0;

    for (int year = 0; year < YEARS_COUNT; ++year) {
        for (int month = 0; month < MONTH_COUNTS; ++month) {
            std::cout << "Give number of sales for " << months[month]
                      << " in year " << year + 1
                      << ": ";
            std::cin >> sales[month][year];
        }
    }
    for (int year = 0; year < YEARS_COUNT; ++year) {
        for (int month = 0; month < MONTH_COUNTS; ++month) {
            sum += sales[month][year];
        }
    }

    std::cout << "Total number of sales is " << sum << "." << std::endl;
    return 0;
}
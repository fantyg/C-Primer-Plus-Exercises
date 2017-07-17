//
// Created by fantyg on 17.07.17.
//
#include <iostream>
#include "sales.h"

namespace SALES {
    void setSales(Sales &s, const double ar[], int n) {
        int i;
        for (i = 0; i < QUARTERS && i < n; ++i) {
            s.sales[i] = ar[i];
        }
        for (; i < QUARTERS; ++i) {
            s.sales[i] = 0.;
        }
        setMinMaxAvg(s);
    }

    void setSales(Sales &s) {
        std::cout << "Input sales for quoters:\n";
        for (int i = 0; i < QUARTERS && std::cin; ++i) {
            std::cin >> s.sales[i];
        }
        setMinMaxAvg(s);
    }

    void setMinMaxAvg(Sales &s) {
        s.min = s.max = s.sales[0];
        s.average = 0.;
        for (int i = 1; i < QUARTERS; ++i) {
            s.min = s.min > s.sales[i] ? s.sales[i] : s.min;
            s.max = s.max < s.sales[i] ? s.sales[i] : s.max;
            s.average += s.sales[i];
        }
        s.average /= QUARTERS;
    }

    void showSales(const Sales &s) {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; ++i) {
            std::cout << "\t" << s.sales[i] << " ";
        }
        std::cout << "\nMinimal: " << s.min << "\n";
        std::cout << "Maximal: " << s.max << "\n";
        std::cout << "Average: " << s.average << "\n";
    }
}


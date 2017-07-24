//
// Created by fantyg on 24.07.17.
//

#include "Sales.h"
#include <iostream>

namespace SALES {
    Sales::Sales() {
        std::cout << "Input sales for quoters:\n";
        for (int i = 0; i < QUARTERS && std::cin; ++i) {
            std::cin >> m_sales[i];
        }
        setMinMaxAvg();
    }

    Sales::Sales(const double *ar, int n) {
        int i;
        for (i = 0; i < QUARTERS && i < n; ++i) {
            m_sales[i] = ar[i];
        }
        for (; i < QUARTERS; ++i) {
            m_sales[i] = 0.;
        }
        setMinMaxAvg();
    }

    void Sales::show() const {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; ++i) {
            std::cout << "\t" << m_sales[i] << " ";
        }
        std::cout << "\nMinimal: " << m_min << "\n";
        std::cout << "Maximal: " << m_max << "\n";
        std::cout << "Average: " << m_average << "\n";
    }

    void Sales::setMinMaxAvg() {
        m_min = m_max = m_sales[0];
        m_average = 0.;
        for (int i = 1; i < QUARTERS; ++i) {
            m_min = m_min > m_sales[i] ? m_sales[i] : m_min;
            m_max = m_max < m_sales[i] ? m_sales[i] : m_max;
            m_average += m_sales[i];
        }
        m_average /= QUARTERS;
    }
}
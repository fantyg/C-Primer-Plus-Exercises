//
// Created by fantyg on 24.07.17.
//

#ifndef EX04_SALES_H
#define EX04_SALES_H

namespace SALES {
    class Sales {
    public:
        Sales();
        Sales(const double ar[], int n);
        void setMinMaxAvg();
        void show() const;
    private:
        static const int QUARTERS = 4;
        double m_sales[QUARTERS];
        double m_average;
        double m_max;
        double m_min;
    };
}

#endif //EX04_SALES_H

//
// Created by fantyg on 17.07.17.
//

#ifndef EX04_SALES_H
#define EX04_SALES_H
namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);

    void setSales(Sales &s);

    void setMinMaxAvg(Sales &s);

    void showSales(const Sales &s);
}
#endif //EX04_SALES_H

#include <iostream>

double *fillArray(double *begin, double *end);

void showArray(const double *begin, const double *end);

void revalue(double *begin, double *end, double r);

int main() {
    const int MAX = 5;
    double properties[MAX];

    double *propertiesEnd = fillArray(properties, properties + MAX);
    showArray(properties, propertiesEnd);
    if (propertiesEnd - properties > 0) {
        std::cout << "Input value change factor: ";
        double factor;
        while (!(std::cin >> factor)) {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Wrong value, input number: ";
        }
        revalue(properties, propertiesEnd, factor);
        showArray(properties, propertiesEnd);
    }
    std::cout << "Ready!" << std::endl;
    return 0;
}

double *fillArray(double *begin, double *end) {
    using std::cout;
    using std::cin;
    double temp;
    double *ptr;
    for (ptr = begin; ptr != end; ++ptr) {
        cout << "Input value " << ptr - begin + 1 << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Wrong data. Input interrupted.\n";
            break;
        } else if (temp < 0) {
            break;
        }
        *ptr = temp;
    }
    return ptr;
}

void showArray(const double *begin, const double *end) {
    for (const double *ptr = begin; ptr != end; ++ptr) {
        std::cout << "Property number " << ptr - begin + 1 << ": "
                  << *ptr << std::endl;
    }
}

void revalue(double *begin, double *end, double r) {
    for (double *ptr = begin; ptr != end; ++ptr) {
        *ptr *= r;
    }
}
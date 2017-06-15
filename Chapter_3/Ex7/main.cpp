#include <iostream>

double euToUs(double);

int main() {
    using namespace std;
    double euConsumption;

    cout << "Input consumption in litres on 100km: ";
    cin >> euConsumption;
    cout << "Consumption in miles on gallon is: " << euToUs(euConsumption) << endl;
    return 0;
}

double euToUs(double eu) {
    const double MILES{62.14}, GALLON{1 / 3.875};

    return (1 / eu) * (MILES / GALLON);
}

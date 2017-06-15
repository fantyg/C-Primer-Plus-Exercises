#include <iostream>

double lightYearsToAstronomyUnits(double);

int main() {
    using namespace std;

    cout << "Input number in light years: ";
    double lightYears;

    cin >> lightYears;
    cout << lightYears << " light years is "
         << lightYearsToAstronomyUnits(lightYears)
         << " astronomy units." << endl;
    return 0;
}

double lightYearsToAstronomyUnits(double lightYears) {
    return lightYears * 63240;
}

#include <iostream>

double lightYearsToAstroUnits(double);

int main()
{
    using namespace std;

    cout << "Input number in ligth years: ";
    double lightYears;

    cin >> lightYears;
    cout << lightYears << " light years is "
         << lightYearsToAstroUnits(lightYears)
         << " astronomical units." << endl;
    return 0;
}

double lightYearsToAstroUnits(double lightYears)
{
    return lightYears * 63240;
}

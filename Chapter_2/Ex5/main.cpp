#include <iostream>

double celsiusToFarenhait(double);

int main() {
    using namespace std;

    cout << "Input temperature in Cesius degrees: ";
    double celsius;

    cin >> celsius;
    cout << celsius << " C is " << celsiusToFarenhait(celsius) << " F." << endl;
    return 0;
}

double celsiusToFarenhait(double celsius) {
    return 1.8 * celsius + 32.;
}

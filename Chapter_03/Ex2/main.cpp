#include <iostream>

double fiToInch(int, int);

double inchToMeters(double);

double poundsToKg(double);

double countBmi(double, double);

int main() {
    using namespace std;
    int foots, inches;
    double pounds;

    cout << "Input your height.\n";
    cout << "Foot(s): ";
    cin >> foots;
    cout << "Inch(es): ";
    cin >> inches;
    cout << "Input your weigh in punds: ";
    cin >> pounds;
    double meters{inchToMeters(fiToInch(foots, inches))}; //counts inches and foots to meters
    double kg{poundsToKg(pounds)};

    cout << "Your BMI: " << countBmi(meters, kg);
    return 0;
}

double fiToInch(int foots, int inches) {
    const short oneFoot = 12;
    return static_cast<double>(oneFoot) * foots + inches;
}

double inchToMeters(double inches) {
    const double mlt = .0254;
    return inches * mlt;
}

double poundsToKg(double pounds) {
    const double mlt = 2.2;
    return pounds / mlt;
}

double countBmi(double meters, double kg) {
    return kg / (meters * meters);
}

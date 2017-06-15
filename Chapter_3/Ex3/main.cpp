#include <iostream>

double sToDegree(int);
double minToDegree(int);

int main()
{
    using namespace std;
    cout << "Input geographical length in degrees, minutes and seconds.\n";
    int degrees, minutes, seconds;

    cout << "Input degrees: ";
    cin >> degrees;
    cout << "Input minutes: ";
    cin >> minutes;
    cout << "Input seconds: ";
    cin >> seconds;
    cout << "It\'s " << degrees + sToDegree(seconds) + minToDegree(minutes);
    cout << " degrees.\n";
    return 0;
}

double sToDegree(int seconds)
{
    const double SECONDS_IN_DEGREE = 3600.0;
    return seconds / SECONDS_IN_DEGREE;
}

double minToDegree(int minutes)
{
    const double MINUTES_IN_DEGREE = 3600.0;
    return minutes / MINUTES_IN_DEGREE;
}

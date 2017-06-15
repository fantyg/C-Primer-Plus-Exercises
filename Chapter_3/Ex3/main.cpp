#include <iostream>

double sToDegree(int);
double minToDegree(int);

int main()
{
    using namespace std;
    cout << "Input geogephical length in degrees, minutes and secunds.\n";
    int degrees, minutes, secundes;

    cout << "Input degrees: ";
    cin >> degrees;
    cout << "Input minutes: ";
    cin >> minutes;
    cout << "Input secundes: ";
    cin >> secundes;
    cout << "It\'s " << degrees + sToDegree(secundes) + minToDegree(minutes);
    cout << " degrees.\n";
    return 0;
}

double sToDegree(int secundes)
{
    return secundes / 3600.0;
}

double minToDegree(int minutes)
{
    return minutes / 60.0;
}

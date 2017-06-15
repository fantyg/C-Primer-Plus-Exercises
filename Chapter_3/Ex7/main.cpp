#include <iostream>

double euToUs(double);

int main()
{
    using namespace std;
    double euConsumpcion;

    cout << "Input consumpcion in litres on 100km: ";
    cin >> euConsumpcion;
    cout << "Consumption in miles on galon is: " << euToUs(euConsumpcion) << endl;
    return 0;
}

double euToUs(double eu)
{
    const double Miles{62.14}, Galon{1 / 3.875};

    return (1 / eu) * (Miles / Galon);
}

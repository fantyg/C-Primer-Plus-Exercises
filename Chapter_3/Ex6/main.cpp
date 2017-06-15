#include <iostream>

int main()
{
    using namespace std;
    long distance;

    cout << "Input distance (in kilometers): ";
    cin >> distance;
    double consumpcion;

    cout << "Input consumpcion of oil (in litres): ";
    cin >> consumpcion;
    cout << "Your car used " << (consumpcion / distance * 100.)
         << "l on 100km.";
    return 0;
}

#include <iostream>

int milesToMeters(int);

//Program change miles to meters
int main() {
    using namespace std;

    cout << "Input miles: ";
    int miles;

    cin >> miles;
    cout << miles << " mile(s) = " << milesToMeters(miles) << " meter(s)." << endl;
}

int milesToMeters(int miles) {
    return miles * 1852;
}

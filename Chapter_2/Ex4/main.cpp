#include <iostream>

int yearsToMonths(int);

int main() {
    using namespace std;

    cout << "Input your age: ";
    int age;

    cin >> age;
    cout << "Your age in moths is " << yearsToMonths(age) << "." << endl;
    return 0;
}

int yearsToMonths(int years) {
    return years * 12;
}

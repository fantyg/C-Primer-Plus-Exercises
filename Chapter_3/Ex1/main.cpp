#include <iostream>

double cmToInch(int);
float cmToFoot(int);

int main()
{
    using namespace std;
    cout << "Input your heigh in cm: ";
    int cm;

    cin >> cm;
    cout << "Your heigh in inch(es): " << cmToInch(cm) << ".\n";
    cout << "Your heigh in foot(s): " << cmToFoot(cm) << ".\n";
    return 0;
}

float cmToFoot(int cm)
{
    const float oneFoot{30.48f};
    return cm / oneFoot;
}

double cmToInch(int cm)
{
    const double oneInch{2.54};
    return cm / oneInch;
}

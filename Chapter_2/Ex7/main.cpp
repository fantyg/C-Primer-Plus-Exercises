#include <iostream>

void printTime(int, int);

int main()
{
    using namespace std;
    cout << "Input hours: ";
    int hours;

    cin >> hours;
    cout << "Input minutes: ";
    int minutes;

    cin >> minutes;
    printTime(hours, minutes);
    return 0;
}

void printTime(int hours, int minutes)
{
    using std::cout;
    using std::endl;
    cout << "Time: " << hours << ":" << minutes << endl;
}

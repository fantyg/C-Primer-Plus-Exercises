#include <iostream>

double countPercent(long long, long long);

int main() {
    using namespace std;
    long long worldPopulation, polandPopulation;

    cout << "Input world population: ________\b\b\b\b\b\b\b\b";
    cin >> worldPopulation;
    cout << "Input Poland population: _____\b\b\b\b\b";
    cin >> polandPopulation;
    cout << "Poland is " << countPercent(polandPopulation, worldPopulation);
    cout << "% of world.\n";
}

double countPercent(long long small, long long big) {
    return double(small) / double(big) * 100L;
}

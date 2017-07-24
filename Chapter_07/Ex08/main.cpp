#include <iostream>

const int SEASONS = 4;
const char *S_NAMES[SEASONS] = {"Spring", "Summer", "Autumn", "Winter"};

struct Expanses{
    double expanses[SEASONS];
};

void fill(double array[SEASONS]);

void fill(Expanses *expanses);

void show(const double array[SEASONS]);

void show(Expanses expanses);

int main() {
    double expanses[SEASONS];
    Expanses expanses1;
    std::cout << "A example:\n";
    fill(expanses);
    show(expanses);
    std::cout << "B example:\n";
    fill(&expanses1);
    show(expanses1);
    return 0;
}

void fill(double array[SEASONS]) {
    using std::cout;
    using std::cin;
    for (int i = 0; i < SEASONS; ++i) {
        cout << "Input expenses for period >>" << S_NAMES[i] << "<<: ";
        cin >> array[i];
    }
}

void fill(Expanses *expanses) {
    fill(expanses->expanses);
}

void show(const double array[SEASONS]) {
    using std::cout;
    double total = 0.0;
    cout << "\nEXPANSES:\n";
    for (int i = 0; i < SEASONS; ++i) {
        cout << S_NAMES[i] << ": " << array[i] << "$\n";
        total += array[i];
    }
    cout << "Total year expanses: " << total << "$\n";
}

void show(Expanses expanses) {
    show(expanses.expanses);
}
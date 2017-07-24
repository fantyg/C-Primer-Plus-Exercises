#include <iostream>

struct CandyBar {
    const char *mark;
    double weight;
    int calories;
};

const CandyBar &initialize(CandyBar &candyBar,
                     const char *mark = "Millennium Munch",
                     double weight = 2.85,
                     int calories = 350);

void show(const CandyBar &candyBar);

int main() {
    CandyBar candyBar1 = {"Snicers", 1.23, 254};
    CandyBar candyBar2;
    show(candyBar1);
    show(initialize(candyBar2));
    show(initialize(candyBar1, "Mars", 0.85, 260));
    return 0;
}

const CandyBar &initialize(CandyBar &candyBar, const char *mark, double weight, int calories) {
    candyBar.mark = mark;
    candyBar.weight = weight;
    candyBar.calories = calories;
    return candyBar;
}

void show(const CandyBar &candyBar) {
    using std::cout;
    cout << "Candy bar:\n";
    cout << "\tMark: " << candyBar.mark << "\n";
    cout << "\tWeight: " << candyBar.weight << "\n";
    cout << "\tCalories: " << candyBar.calories << "\n";
}
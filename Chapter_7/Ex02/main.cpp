#include <iostream>

int setScores(int *scores, int limit);

void showScores(const int *begin, const int *end);

int countAverage(const int *begin, const int *end);

void clearCin();

int main() {
    const int LIMIT = 10;
    int scores[LIMIT];
    int inputed = setScores(scores, LIMIT);
    showScores(scores, scores + inputed);
    std::cout << "Hi!" << std::endl;
    return 0;
}

int setScores(int *scores, int limit) {
    using std::cout;
    using std::cin;
    cout << "Input up to " << limit << " scores.\nNot a number ends input.\n";
    int i;
    for (i = 0; i < limit && cin; ++i) {
        cout << "Input #" << i + 1 << " score: ";
        cin >> scores[i];
    }
    if (!cin) {
        clearCin();
        --i;
    }
    cout << "Thank you!\n";
    return i;
}

void showScores(const int *begin, const int *end) {
    using std::cout;
    cout << "Your scores:\n";
    for (const int *ptr = begin; ptr != end; ++ptr) {
        cout << *ptr << " ";
    }
    cout << "\nAverage: " << countAverage(begin, end) << "\n";
}

int countAverage(const int *begin, const int *end) {
    int sum = 0;
    for (const int *ptr = begin; ptr != end; ++ptr) {
        sum += *ptr;
    }
    return sum / int(end - begin);
}

void clearCin() {
    using std::cin;
    cin.clear();
    while (cin.get() != '\n') { ;
    }
}
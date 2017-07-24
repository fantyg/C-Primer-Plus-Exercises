#include <iostream>

int fillArray(double array[], int size);

void showArray(const double array[], int size);

void reverseArray(double array[], int size);

void clearCin();

int main() {
    const int ARRAY_SIZE = 10;
    double array[10];
    int realSize = fillArray(array, ARRAY_SIZE);

    std::cout << "Your numbers:\n";
    showArray(array, realSize);
    std::cout << "Reversing...\n";
    reverseArray(array, realSize);
    std::cout << "Yours numbers now:\n";
    showArray(array, realSize);
    return 0;
}

int fillArray(double array[], int size) {
    using std::cout;
    using std::cin;

    cout << "Input up to " << size << " numbers (not a number ends input).\n";
    int i;
    for(i = 0; i < size && (cin >> array[i]); ++i);
    if (!cin) {
        clearCin();
    }
    return i;
}

void showArray(const double array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << std::endl;
    }
}

void reverseArray(double array[], int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        double temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

void clearCin() {
    std::cin.clear();
    while (std::cin.get() != '\n');
}
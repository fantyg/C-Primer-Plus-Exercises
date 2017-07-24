#include <iostream>

void printEntliczek();

void printStoliczek();

//Program printing a poem
int main() {
    printEntliczek();
    printEntliczek();
    printStoliczek();
    printStoliczek();
}

void printEntliczek() {
    using std::cout;

    cout << "Entliczek pentliczek\n";
}

void printStoliczek() {
    using std::cout;

    cout << "Czerwony stoliczek\n";
}

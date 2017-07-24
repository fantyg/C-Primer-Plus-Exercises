#include <iostream>
#include <cstring>

struct stringy {
    char *str;
    size_t ct;
};

void set(stringy &destinations, char *source);

void show(const stringy &str, int n = 1);

void show(const char *str, int n = 1);


int main() {
    stringy beany;
    char testing[] = "Reality is not what it was.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Ready!");
    return 0;
}

void set(stringy &destinations, char *source) {
    destinations.ct = strlen(source) + 1;
    destinations.str = new char[destinations.ct];
    strncpy(destinations.str, source, destinations.ct);
}

void show(const stringy &str, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << str.str << "\n";
    }
}

void show(const char *str, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << str << "\n";
    }
}
#include <iostream>

int showCount = 0;

void show(const char *string);

void show(const char *string, int n);

int main() {
    show("String1\n");
    show("String2\n");
    show("String3\n");
    show("String4\n", 1);
    show("String5\n", 2);
    show("String6\n", 0);
    show("String7\n", 0);
    show("String8\n", 3);

    return 0;
}

void show(const char *string) {
    std::cout << string;
    ++showCount;
}

void show(const char *string, int n) {
    if (n != 0) {
        for (int i = showCount; i > 0; --i) {
            std::cout << string;
        }
    }
    ++showCount;
}


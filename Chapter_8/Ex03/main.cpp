#include <iostream>
#include <cstring>

const std::string &bigger(std::string &str);

int main() {
    std::string s;
    std::cout << "Input strings: ";
    getline(std::cin, s);
    while (s.compare("q")) {
        std::cout << bigger(s) << "\n";
        std::cout << "Next string: ";
        getline(std::cin, s);
    }
    return 0;
}

const std::string &bigger(std::string &str) {
    for (int i = 0; i < str.size(); ++i) {
        str[i] = char(toupper(str[i]));
    }
    return str;
}
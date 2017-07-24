#include <iostream>
#include <cctype>

int main() {
    std::cout << "Input some text (@ ends input)." << std::endl;

    char c;
    std::string input;
    while (std::cin.get(c) && c != '@') {
        input += c;
    }

    for (int i = 0; i < input.size(); ++i) {
        if (!isdigit(input[i])) {
            if (!isalpha(input[i])) {
                std::cout << input[i];
            } else {
                if (isupper(input[i])) {
                    std::cout << char(tolower(input[i]));
                } else {
                    std::cout << char(toupper(input[i]));
                }
            }
        }
    }
    return 0;
}
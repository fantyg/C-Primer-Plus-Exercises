#include <iostream>
#include <cstring>

int main() {
    const int WORD_MAX_LENGTH = 50;
    int wordsCount = 0;
    char word[WORD_MAX_LENGTH];

    std::cout << "Input words (when you finish, input \"end\")" << std::endl;
    std::cin >> word;
    while (strcmp(word, "end")) {
        ++wordsCount;
        std::cin >> word;
    }
    std::cout << "You've inputted " << wordsCount << " words." << std::endl;
    return 0;
}
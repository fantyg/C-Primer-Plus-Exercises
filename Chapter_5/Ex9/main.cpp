#include <iostream>
#include <cstring>

int main() {
    int wordsCount = 0;
    std::string word;

    std::cout << "Input words (when you finish, input \"end\")" << std::endl;
    std::cin >> word;
    while (word.compare("end")) {
        ++wordsCount;
        std::cin >> word;
    }
    std::cout << "You've inputted " << wordsCount << " words." << std::endl;
    return 0;
}
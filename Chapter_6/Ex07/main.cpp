#include <iostream>

void checkCin();

int main() {
    std::string inputWord;
    int vowels, consonants, others;
    vowels = consonants = others = 0;
    std::cout << "Input words (q ends input):" << std::endl;
    std::cin >> inputWord;
    checkCin();
    while (inputWord.compare("q")) {
        if (isalpha(inputWord[0])) {
            switch (inputWord[0]) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'y':
                case 'Y':
                case 'u':
                case 'U':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                    ++vowels;
                    break;
                default:
                    ++consonants;
            }
        } else {
            ++others;
        }
        std::cin >> inputWord;
    }

    std::cout << vowels << " words start with vowel." << std::endl;
    std::cout << consonants << " words start with consonant." << std::endl;
    std::cout << others << " words do not start with letter." << std::endl;
    return 0;
}

void checkCin() {
    if (!std::cin.good()) {
        std::cout << "Wrong input!" << std::endl;
        exit(EXIT_FAILURE);
    }
}
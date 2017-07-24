#include <iostream>

void showMenu();

int main() {
    char decision;

    showMenu();
    std::cin >> decision;
    while (decision != 'q' && decision != 'Q') {
        switch (decision) {
            case 'h':
            case 'H':
                std::cout << "Elk is a herbivore." << std::endl;
                break;
            case 'p':
            case 'P':
                std::cout << "Frederick Chopin was a pianist." << std::endl;
                break;
            case 't':
            case 'T':
                std::cout << "Maple is a tree." << std::endl;
                break;
            case 'g':
            case 'G':
                std::cout << "The Legend of Zelda is a game." << std::endl;
                break;
            default:
                std::cout << "There is not such option." << std::endl;
                break;
        }
        showMenu();
        std::cin >> decision;
    }
    std::cout << "Good bye!" << std::endl;
    return 0;
}

void showMenu() {
    std::cout << "Make your decision:" << std::endl;
    std::cout << "h. herbivore" << std::endl;
    std::cout << "p. pianist" << std::endl;
    std::cout << "t. tree" << std::endl;
    std::cout << "g. game" << std::endl;
    std::cout << "q. quit" << std::endl;
    std::cout << "Your decision: ";
}
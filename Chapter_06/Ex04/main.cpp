#include <iostream>

struct zpdw {
    std::string name;
    std::string position;
    std::string nickname;
    int preference;
};

void showMenu();

void showByPreferences(const int pref, const zpdw members[], const int membersNumber);

void showAll(const zpdw members[], const int membersNumber);

int main() {
    const int MEMBERS_NUMBER = 3;
    zpdw members[MEMBERS_NUMBER] = {
            {"Kamil", "C++ Developer",  "FantyG", 0},
            {"Ola",   "Java Developer", "Orzech", 1},
            {"Radek", "None",           "Radzio", 2}
    };
    char decision;
    showMenu();
    while (std::cin >> decision && decision != 'q') {
        switch (decision) {
            case 'a':
                showByPreferences(0, members, MEMBERS_NUMBER);
                break;
            case 'b':
                showByPreferences(1, members, MEMBERS_NUMBER);
                break;
            case 'c':
                showByPreferences(2, members, MEMBERS_NUMBER);
                break;
            case 'd':
                showAll(members, MEMBERS_NUMBER);
                break;
            default:
                std::cout << "There is no such option.";
                break;

        }
        showMenu();
    }
    std::cout << "Good bye!" << std::endl;
    return 0;
}

void showMenu() {
    std::cout << "Show by:" << std::endl;
    std::cout << "a. name" << std::endl;
    std::cout << "b. position" << std::endl;
    std::cout << "c. nickname" << std::endl;
    std::cout << "d. preference" << std::endl;
    std::cout << "q. quit." << std::endl;
    std::cout << "Your decision: ";
}

void showByPreferences(const int pref, const zpdw members[], const int membersNumber) {
    for (int i = 0; i < membersNumber; ++i) {
        if (members[i].preference == pref) {
            switch (members[i].preference) {
                case 0:
                    std::cout << members[i].name << std::endl;
                    break;
                case 1:
                    std::cout << members[i].position << std::endl;
                    break;
                case 2:
                    std::cout << members[i].nickname << std::endl;
                    break;
                default:
                    std::cout << "Wrong preference." << std::endl;
                    exit(EXIT_FAILURE);
            }
        }
    }
}

void showAll(const zpdw members[], const int membersNumber) {
    for (int i = 0; i < membersNumber; ++i) {
        switch (members[i].preference) {
            case 0:
                std::cout << members[i].name << std::endl;
                break;
            case 1:
                std::cout << members[i].position << std::endl;
                break;
            case 2:
                std::cout << members[i].nickname << std::endl;
                break;
            default:
                std::cout << "Wrong preference." << std::endl;
                exit(EXIT_FAILURE);
        }
    }
}
#include <iostream>
#include <cstring>

int main() {
    const int ARR_SIZE = 32;
    char firstName[ARR_SIZE];
    //this string will be concatenating with first name
    char lastName[ARR_SIZE * 2 + 1];

    std::cout << "Tell me your first name: ";
    std::cin.getline(firstName, ARR_SIZE);
    std::cout << "Tell me your last name: ";
    std::cin.getline(lastName, ARR_SIZE);
    strcat(lastName, ", ");
    strcat(lastName, firstName);
    std::cout << "Your names in one line: "
              << lastName
              << "."
              << std::endl;
    return 0;
}
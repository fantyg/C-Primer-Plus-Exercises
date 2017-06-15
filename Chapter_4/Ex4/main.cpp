#include <iostream>

int main() {
    const int ARR_SIZE = 32;
    std::string firstName;
    //this string will be concatenating with first name
    std::string lastName;

    std::cout << "Tell me your first name: ";
    getline(std::cin, firstName);
    std::cout << "Tell me your last name: ";
    getline(std::cin, lastName);
    lastName = lastName + ", " + firstName;
    std::cout << "Your names in one line: "
              << lastName
              << "."
              << std::endl;
    return 0;
}
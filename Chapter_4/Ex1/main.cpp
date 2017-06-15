#include <iostream>
#include <string>

int main()
{
    std::string name, l_name;
    int note, age;

    std::cout << "What's your name? ";
    getline(std::cin, name);
    std::cout << "What's your last name? ";
    getline(std::cin, l_name);
    std::cout << "How old are your? ";
    std::cin >> age;
    std::cout << "What note do you deserve? ";
    std::cin >> note;

    std::cout << "Name: " << l_name << ", " << name << std::endl;
    std::cout << "Note: " << note - 1 << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}

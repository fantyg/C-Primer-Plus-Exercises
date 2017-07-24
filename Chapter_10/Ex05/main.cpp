#include <iostream>
#include "Stack.h"

int main() {
    Stack stack;
    Customer customer;
    std::cout << "Is empty: " << stack.isEmpty() << ", is full: " << stack.isFull() << ".\n";
    std::cout << stack.push(Customer{"Arya Stark", 15}) << "\n";
    std::cout << stack.push(Customer{"Jon Snow", 25}) << "\n";
    std::cout << stack.push(Customer{"Brandon Stark", 5}) << "\n";
    std::cout << stack.push(Customer{"Rickon Stark", 115}) << "\n";
    std::cout << stack.push(Customer{"Robb Stark", 1}) << "\n";
    std::cout << stack.push(Customer{"Ned Stark", 1}) << "\n";
    std::cout << "Is empty: " << stack.isEmpty() << ", is full: " << stack.isFull() << ".\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << stack.pop(customer) << "\n";
        std::cout << "Name: " << customer.fullname << ", payment: " << customer.payment << "\n";
    }
    return 0;
}
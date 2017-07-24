//
// Created by fantyg on 24.07.17.
//

#ifndef EX05_STACK_H
#define EX05_STACK_H

struct Customer {
    char fullname[35];
    double payment;
};

typedef Customer Item;

class Stack {
private:
    static const int MAX = 5;
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    bool push(const Item &item);
    bool pop(Item &item);
};


#endif //EX05_STACK_H

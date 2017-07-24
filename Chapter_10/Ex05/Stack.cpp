//
// Created by fantyg on 24.07.17.
//

#include "Stack.h"

Stack::Stack() {
    top = 0;
}

bool Stack::isEmpty() {
    return top == 0;
}

bool Stack::isFull() {
    return top == MAX;
}

bool Stack::push(const Item &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    }
    return false;
}

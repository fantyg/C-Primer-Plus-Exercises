//
// Created by fantyg on 25.07.17.
//

#ifndef EX08_LIST_H
#define EX08_LIST_H

typedef int Item;

class List {
private:
    struct ListNode {
        Item value;
        ListNode *next;
        ListNode *prev;
    };
    ListNode *m_first;
    ListNode *m_last;
public:
    List();

    void add(const Item &val);

    bool isEmpty() const;

    void forEach(void (*pf)(Item &));
};


#endif //EX08_LIST_H

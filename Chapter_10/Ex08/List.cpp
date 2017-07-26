//
// Created by fantyg on 25.07.17.
//

#include "List.h"

List::List() {
    m_first = m_last = nullptr;
}

bool List::isEmpty() const {
    return m_first == nullptr;
}

void List::add(const Item &val) {
    if (m_first == nullptr) {
        m_first = m_last = new ListNode;
        m_first->next = m_first->prev = nullptr;
        m_first->value = val;
        return;
    }
    m_last->next = new ListNode;
    m_last->next->next = nullptr;
    m_last->next->prev = m_last;
    m_last = m_last->next;
    m_last->value = val;
}

void List::forEach(void (*pf)(Item &)) {
    ListNode *e = m_first;
    while (e != nullptr) {
        pf(e->value);
        e = e->next;
    }
}
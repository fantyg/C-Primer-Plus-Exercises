//
// Created by fantyg on 25.07.17.
//

#ifndef EX07_PLORG_H
#define EX07_PLORG_H


class Plorg {
private:
    static const int NAME_MAX = 20;
    char m_name[NAME_MAX];
    int m_repletion;
public:
    Plorg(const char *name = "Plorga");

    void setReplatation(int r);

    void show() const;
};


#endif //EX07_PLORG_H

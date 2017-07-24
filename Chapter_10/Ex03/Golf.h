//
// Created by fantyg on 24.07.17.
//

#ifndef EX03_GOLF_H
#define EX03_GOLF_H


class Golf {
private:
    static const int LEN = 40;
    int m_handicap;
public:
    char m_fullname[LEN];

    Golf();

    Golf(const char *name, int hc);

    void setHendicap(int hc);

    void show();
};


#endif //EX03_GOLF_H

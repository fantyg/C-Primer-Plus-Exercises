//
// Created by fantyg on 24.07.17.
//

#ifndef EX01_BANKACCOUNT_H
#define EX01_BANKACCOUNT_H

#include <string>

class BankAccount {
public:
    BankAccount(const std::string &name, const std::string &number, double balance = 0.0);

    void show() const;

    void giveMoney(double money);

    double takeMoney(double money);

private:
    std::string m_name;
    std::string m_number;
    double m_balance;
};


#endif //EX01_BANKACCOUNT_H

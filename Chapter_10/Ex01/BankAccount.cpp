//
// Created by fantyg on 24.07.17.
//

#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string &name, const std::string &number, double balance) {
    m_name = name;
    m_number = number;
    m_balance = balance;
}

void BankAccount::show() const {
    std::ios_base::fmtflags oldSettings = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize oldPrecision = std::cout.precision(2);
    std::cout << "Name: " << m_name
              << ", account number: " << m_number
              << ", balance: " << m_balance << "\n";
    std::cout.setf(oldSettings);
    std::cout.precision(oldPrecision);
}

void BankAccount::giveMoney(double money) {
    m_balance += money;
}

double BankAccount::takeMoney(double money) {
    if (m_balance < money) {
        double result = m_balance;
        m_balance = 0.0;
        return result;
    }
    m_balance -= money;
    return money;
}


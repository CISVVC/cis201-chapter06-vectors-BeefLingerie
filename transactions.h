/**
 * @author      : Luke Schron
 * @file        : transactions.h
 * @email       : schronl@student.vvc.edu
 * @created     : Thursday Nov 08, 2018 03:02:36 PST
 */

#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <string>


class Transaction
{
    int m_day;
    double m_amount;
    std::string m_descript;
    double m_interest;

    public:
        Transaction();
        Transaction(int day, double amount, std::string descript);
        double get_interest();
        double amount();
        int get_day();
        std::string to_string();
};


#endif /* end of include guard TRANSACTIONS_H */


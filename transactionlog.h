/**
 * @author      : Luke Schron 
 * @file        : transactionlog.h
 * @email       : schronl@student.vvc.edu
 * @created     : Thursday Nov 08, 2018 03:46:00 PST
 */

#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H

#include <vector>
#include "transactions.h"


class Transactionlog: public Transaction
{
    std::vector<Transaction> m_transac;
    double m_balance;
    const int day_total = 30;

    public:
        void deposit(const Transaction &t);
        // void balance();
        double daily_balance(int day);
        std::vector<double> get_dailies();
        double get_interest(std::vector<double> daily);
        void print_dailies(std::vector<double> daily);
        void print_translog();
};


#endif /* end of include guard TRANSACTIONLOG_H */


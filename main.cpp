/*
 * File: main.cpp
 * Description: Some text here...
 * Author: Luke Schron
 * Email: schronl@student.vvc.edu
 * Date: **-**-****
*/

#include <iostream>
#include <vector>
#include "transactions.h"
#include "transactionlog.h"

int main()
{
    Transactionlog tl;
    tl.deposit(Transaction(1, 200.00, "Initial balance"));
    tl.deposit(Transaction(1, 220.10, "Initial balance"));
    tl.deposit(Transaction(1, -20.10, "Initial balance"));
    tl.deposit(Transaction(2, -20.10, "Initial balance"));

    tl.print_translog();

    std::cout << tl.daily_balance(1) << std::endl;
    tl.print_dailies(tl.get_dailies());
    std::cout << "Total interest earned over the month " << tl.get_interest(tl.get_dailies()) << std::endl;

    return 0;
}

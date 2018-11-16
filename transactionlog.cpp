/*
 * File: transactionlog.cpp
 * Description: Some text here...
 * Author: Luke Schron
 * Email: schronl@student.vvc.edu
 * Date: **-**-****
*/

#include <iostream>
#include "transactionlog.h"

void Transactionlog::deposit(const Transaction &t)
{
    m_transac.push_back(t);
}

double Transactionlog::daily_balance(int day)
{
    m_balance = 0.0;
    for( int i = 0; i < m_transac.size(); i++ )
        if( m_transac[i].get_day() == day)
            m_balance += m_transac[i].amount();
    return m_balance;
}

std::vector<double> Transactionlog::get_dailies()
{
    std::vector<double> daily_bal;
    double balance = 0.0;
    for( int day = 0; day < day_total; day++ )
    {
        balance += Transactionlog::daily_balance(day + 1);
        daily_bal.push_back(balance);
    }
    return daily_bal;
}

double Transactionlog::get_interest(std::vector<double> daily)
{
    double interest = 0.005;
    double min_day_bal = daily[0];
    double average_day_bal = 0.0;

    for( int i = 0; i < daily.size(); i++ )
    {
        if( daily[i] < min_day_bal )
            min_day_bal = daily[i];
        average_day_bal += daily[i];
    }
    
    return (((average_day_bal / 30) * interest) + min_day_bal * interest);

}

void Transactionlog::print_translog()
{
    for(int i = 0; i < m_transac.size(); i++)
        std::cout << m_transac[i].to_string() << std::endl;
}

void Transactionlog::print_dailies(std::vector<double> daily)
{
    for( int i = 0; i < daily.size(); i++ )
        std::cout << std::to_string(daily[i]) << " Day " << i + 1 << std::endl;

}

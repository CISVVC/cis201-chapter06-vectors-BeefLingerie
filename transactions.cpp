/*
 * File: transactions.cpp
 * Description: Some text here...
 * Author: Luke Schron
 * Email: schronl@student.vvc.edu
 * Date: 11/08/2018
*/

#include <string>
#include "transactions.h"


Transaction::Transaction()
{
    m_day = 0;
    m_amount = 0.00;
    m_descript = "blank";
    m_interest = 0.5;
}

Transaction::Transaction(int day, double amount, std::string descript)
{
    m_day = day;
    m_amount = amount;
    m_descript = descript;
}

double Transaction::get_interest()
{
    return m_interest;
}

double Transaction::amount()
{
    return m_amount;
}

int Transaction::get_day()
{
    return m_day;
}

std::string Transaction::to_string()
{
    std::string text = "Day: ";

    return text + std::to_string(m_day)
        + " Amount: " + std::to_string(m_amount)
        + " Description: " + m_descript;
}

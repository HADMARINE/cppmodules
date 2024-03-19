/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:33:22 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 15:48:34 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    _displayTimestamp();
    std::cout
        << "index:"
        << this->_accountIndex
        << ";amount:"
        << this->_amount
        << ";created"
        << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout
        << "index:"
        << this->_accountIndex
        << ";amount:"
        << this->_amount
        << ";closed"
        << std::endl;
}

Account::Account(void)
{
    this->_accountIndex = this->_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

}

void Account::_displayTimestamp()
{
    std::cout << "[19920104_091532] ";
    return ;
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << now->tm_year + 1900
        << now->tm_mon + 1
        << now->tm_mday
        << "_"
        << now->tm_hour
        << now->tm_min
        << now->tm_sec
        << "] ";
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

int Account::checkAmount() const
{
    return this->_amount;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout
        << "accounts:"
        << getNbAccounts()
        << ";total:"
        << getTotalAmount()
        << ";deposits:"
        << getNbDeposits()
        << ";withdrawals:"
        << getNbWithdrawals()
        << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout
        << "index:"
        << this->_accountIndex
        << ";amount:"
        << this->_amount
        << ";deposits:"
        << this->_nbDeposits
        << ";withdrawals:"
        << this->_nbWithdrawals
        << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout
        << "index:"
        << this->_accountIndex
        << ";p_amount:"
        << this->_amount
        << ";deposit:"
        << deposit
        << ";amount:"
        << this->_amount + deposit
        << ";nb_deposits:"
        << ++this->_nbDeposits
        << std::endl;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (withdrawal > this->_amount)
    {
        std::cout
            << "index:"
            << this->_accountIndex
            << ";p_amount:"
            << this->checkAmount()
            << ";withdrawal:refused"
            << std::endl;
        return (false);
    }
    std::cout
        << "index:"
        << this->_accountIndex
        << ";p_amount:"
        << this->_amount
        << ";withdrawal:"
        << withdrawal
        << ";amount:"
        << this->_amount - withdrawal
        << ";nb_withdrawals:"
        << ++this->_nbWithdrawals
        << std::endl;
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    return (true);

}

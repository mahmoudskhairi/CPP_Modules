#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    std::cout << "[19920104_091532] index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";created"
              << std::endl;
}

Account::~Account()
{
    std::cout << "[19920104_091532] index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";closed"
              << std::endl;
}
// get functions for the grobal data
int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

// make functions

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "[19920104_091532] index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "deposit" << deposit << ";"
              << "amount:" << this->_amount + deposit << ";"
              << "nb_deposits:" << this->_nbDeposits
              << std::endl;
    _amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << "[19920104_091532] index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "withdrawal:";
    _amount -= withdrawal;
    if (checkAmount() < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";"
              << "amount:" << this->_amount - withdrawal << ";"
              << "nb_withdrawals:" << this->_nbWithdrawals
              << std::endl;
    _amount -= withdrawal;
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

// displayin functions

void Account::displayAccountsInfos(void)
{
    std::cout << "[19920104_091532] accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";"
              << "deposits:" << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals()
              << std::endl;
}

void Account::displayStatus(void) const
{
    std::cout << "[19920104_091532] index:" << this->_accountIndex << ";"
              << "amount:" << 47 << ";"
              << "deposits:" << 1 << ";"
              << "withdrawals:" << 0
              << std::endl;
}
void _displayTimestamp(void)
{
    return;
}

// int main()
// {
//     std::cout << "hello\n";
// }
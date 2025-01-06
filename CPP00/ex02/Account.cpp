#include "Account.hpp"

//initialization of static data members of Account class

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//constructors

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";created"
              << std::endl;
}

//destructor

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";closed"
              << std::endl;
}
// get properties of Account class
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

int Account::checkAmount(void) const
{
    return (this->_amount);
}

// make Deposits and withdrawals functions

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << this->_amount + deposit << ";"
              << "nb_deposits:" << this->_nbDeposits
              << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "withdrawal:";
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
    _totalAmount -= withdrawal;
    return (true);
}

// get and display informations from created accounts

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";"
              << "deposits:" << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals()
              << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "deposits:" << this->_nbDeposits << ";"
              << "withdrawals:" << this->_nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t time = std::time(0);
    std::tm *LocalTime = std::localtime(&time);
    std::cout << "[" << LocalTime->tm_year + 1900 << LocalTime->tm_mon + 1 << LocalTime->tm_mday
              << "_" << LocalTime->tm_hour << LocalTime->tm_min << LocalTime->tm_sec << "] ";
}

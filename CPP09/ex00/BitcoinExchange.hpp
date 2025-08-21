#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
class BitcoinExchange
{
private:
    std::string _userfilename;
    std::string _databasefilename;
    std::map<std::string, double> _database;
    BitcoinExchange(/* args */);
public:
    BitcoinExchange(std::string userfilename);
    BitcoinExchange(BitcoinExchange &other);
    void    FillDatabase();
    void    AnalyseUserInput();
    void    printDataBase();
    BitcoinExchange &operator=(BitcoinExchange &other);
    ~BitcoinExchange();
};

#endif
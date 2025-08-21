#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
class BitcoinExchange
{
private:
    struct data
    {
        std::string key, value;
        int year;
        int month;
        int day;
        double btcValue;
    };
    std::string _userfilename;
    std::string _databasefilename;
    std::vector<data> _database;
    BitcoinExchange(/* args */);
public:
    BitcoinExchange(std::string userfilename);
    BitcoinExchange(BitcoinExchange &other);
    void    ParceData();
    void    FillUserData(data &data, std::string key, std::string value);
    void    FillData(std::string key, std::string value);
    void    AnalyseUserInput();
    bool    is_validDate(std::vector<data>::iterator &it);
    int     Is_DateExist(std::vector<data>::iterator &it,data &userdata);
    int     GetPreviousDate(std::vector<data>::iterator &it,data &userdata);
    void    printDataBase();
    BitcoinExchange &operator=(BitcoinExchange &other);
    ~BitcoinExchange();
};

#endif
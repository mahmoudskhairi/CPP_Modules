#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>

struct data
{
    std::string key, value;
    int year;
    int month;
    int day;
    double btcValue;
};
class BitcoinExchange
{
    private:
        std::string         _userfilename;
        std::string         _databasefilename;
        std::multimap<std::string, data>   _database;
        BitcoinExchange(/* args */);
    public:
        BitcoinExchange(std::string userfilename);
        BitcoinExchange(BitcoinExchange &other);
        void                ParceData();
        void                FillUserData(data &data, std::string key, std::string value);
        void                FillData(std::string key, std::string value);
        void                AnalyseUserInput();
        bool                is_validDate(data &Data);
        int                 Is_DateExist(std::multimap<std::string, data>::iterator &it,data &userdata);
        void                cleanData(data &userdata);
        void                printDataBase();
        BitcoinExchange     &operator=(BitcoinExchange &other);
        ~BitcoinExchange();
};

#endif
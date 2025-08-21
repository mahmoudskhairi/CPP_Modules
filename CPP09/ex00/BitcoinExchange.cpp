#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
}
BitcoinExchange::BitcoinExchange(std::string userfilename): _userfilename(userfilename), _databasefilename("data.csv"){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &other)
{
    this->_databasefilename = other._databasefilename;
    this->_userfilename = other._userfilename;
    this->_database = other._database;
}
void    BitcoinExchange::FillData(std::string key, std::string value)
{
    data mydata;
    mydata.btcValue = strtod(value.c_str(), NULL);
    // std::string date;
    // int year, month, day;
    std::stringstream streamDate(key);
    
    getline(streamDate, key, '-');
    mydata.year = strtod(key.c_str(), NULL);
    getline(streamDate, key, '-');
    mydata.month = strtod(key.c_str(), NULL);
    getline(streamDate, key, '-');
    mydata.day = strtod(key.c_str(), NULL);
    this->_database.push_back(mydata);
}
void    BitcoinExchange::ParceData()
{
    std::string line, key, value;
    std::ifstream fs(this->_databasefilename.c_str());
    std::getline(fs, line);
    // std::cout << "line: " << line << std::endl;
    while (std::getline(fs, line))
    {
        if (line.empty()) 
        continue;
        std::stringstream strstream(line);

        if (!std::getline(strstream, key, ','))
            continue;
        if (!std::getline(strstream, value, ','))
            continue;
        //earase all spaces around key aand value.
        key.erase(0, key.find_first_not_of(" \t\r\n"));
        key.erase(key.find_last_not_of(" \t\r\n") + 1);
        
        value.erase(0, value.find_first_not_of(" \t\r\n"));
        value.erase(value.find_last_not_of(" \t\r\n") + 1);
        //fill data to its struct.
        FillData(key, value);
    }
    // printDataBase();
}

void    BitcoinExchange::printDataBase()
{
    for (std::vector<data>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
    {
        std::cout << (*it).year << "-" << (*it).month << "-" << (*it).day << " , " << (*it).btcValue << std::endl;
    }
}

bool    BitcoinExchange::is_validDate(std::vector<data>::iterator &it)
{
    // std::cout << "year: " << year << ", month: " << month << ", day: " << day << std::endl;
    if ((*it).year > 2025 || !((*it).month >= 1 && (*it).month <= 12) || !((*it).day >= 1 && (*it).day <= 31))
        return 0;
    return 1;
}

void BitcoinExchange::FillUserData(data &userData, std::string key, std::string value)
{
    userData.btcValue = strtod(value.c_str(), NULL);
    // std::string date;
    // int year, month, day;
    std::stringstream streamDate(key);
    
    getline(streamDate, key, '-');
    userData.year = strtod(key.c_str(), NULL);
    getline(streamDate, key, '-');
    userData.month = strtod(key.c_str(), NULL);
    getline(streamDate, key, '-');
    userData.day = strtod(key.c_str(), NULL);
    userData.btcValue = strtod(value.c_str(), NULL);
}

void    BitcoinExchange::GetPreviousDate(std::vector<data>::iterator &it,data &userdata)
{
}

int     BitcoinExchange::Is_DateExist(std::vector<data>::iterator &it,data &userdata)
{
    if (!(*it).key.compare(userdata.key))
        return 1;
    return 0;
}
void    BitcoinExchange::AnalyseUserInput()
{
    std::string line, key, value;
    data userdata;
    std::ifstream inputuserfile(this->_userfilename.c_str());
    std::getline(inputuserfile, line);
    while (std::getline(inputuserfile, line))
    {        
        std::stringstream strstream(line);
        std::getline(strstream, key, '|') && strstream >> value;
        //earase all spaces around key aand value.
        key.erase(0, key.find_first_not_of(" \t\r\n"));
        key.erase(key.find_last_not_of(" \t\r\n") + 1);
        
        value.erase(0, value.find_first_not_of(" \t\r\n"));
        value.erase(value.find_last_not_of(" \t\r\n") + 1);
        FillUserData(userdata, key, value);
        for (std::vector<data>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
        {
            if (!is_validDate(it))
            {
                std::cerr << "Error: bad input => " << key << std::endl;
                continue;
            }
            if (userdata.btcValue < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
            if (Is_DateExist(it, userdata))
            {
                std::cout << (*it).key << " => " << (*it).value << " = " << (*it).btcValue * userdata.btcValue << std::endl;
            }
            else if (GetPreviousDate(it, userdata) == -1)
            {
                // incomplete implementation
                it--;
                std::cout << (*it).key << " => " << (*it).value << " = " << (*it).btcValue * userdata.btcValue << std::endl;
            }    

        }
    }
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &other)
{
    if (this != &other)
    {
        this->_databasefilename = other._databasefilename;
        this->_userfilename = other._userfilename;
        this->_database = other._database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}
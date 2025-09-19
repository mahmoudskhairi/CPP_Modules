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
    std::string year, month, day;
    std::stringstream streamDate(key);
    
    getline(streamDate, year, '-');
    mydata.year = strtod(year.c_str(), NULL);
    getline(streamDate, month, '-');
    mydata.month = strtod(month.c_str(), NULL);
    getline(streamDate, day, '-');
    mydata.day = strtod(day.c_str(), NULL);
    mydata.key = key;
    mydata.value = value;
    this->_database.insert(std::make_pair(key ,mydata));
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
        {
            continue;
        }
        std::stringstream strstream(line);

        if (!std::getline(strstream, key, ','))
        {
            continue;
        }
        if (!std::getline(strstream, value, ','))
        {
            continue;
        }    
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
    for (std::multimap<std::string, data>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
    {
        std::cout << "#" << std::endl;
        std::cout << "key: " << (*it).second.key << ", value: " << (*it).second.value << std::endl;
        std::cout << (*it).second.year << "-" << (*it).second.month << "-" << (*it).second.day << " , " << (*it).second.btcValue << std::endl;
        std::cout << "#" << std::endl;
    }
}

bool    BitcoinExchange::is_validDate(data &Data)
{
    // std::cout << "year: " << year << ", month: " << month << ", day: " << day << std::endl;
    if (Data.year > 2025 || !(Data.month >= 1 && Data.month <= 12) || !(Data.day >= 1 && Data.day <= 31) || Data.btcValue >  2147483647)
        return 0;
    return 1;
}

void BitcoinExchange::FillUserData(data &userData, std::string key, std::string value)
{
    userData.btcValue = strtod(value.c_str(), NULL);
    std::string year, month, day;
    std::stringstream streamDate(key);
    
    getline(streamDate, year, '-');
    userData.year = strtod(year.c_str(), NULL);
    getline(streamDate, month, '-');
    userData.month = strtod(month.c_str(), NULL);
    getline(streamDate, day, '-');
    userData.day = strtod(day.c_str(), NULL);
    userData.btcValue = strtod(value.c_str(), NULL);
    userData.key = key;
    userData.value = value;
}

void    BitcoinExchange::cleanData(data &userdata)
{
        userdata.key = "";
        userdata.value = "";
        userdata.year = 0;
        userdata.month = 0;
        userdata.day = 0;
        userdata.btcValue = 0.0;
}

int     BitcoinExchange::Is_DateExist(std::multimap<std::string, data>::iterator &it,data &userdata)
{
    if (!(*it).second.key.compare(userdata.key))
        return 1;
    return 0;
}
void    BitcoinExchange::AnalyseUserInput()
{
    std::string line, key, value;
    data userdata;
    std::ifstream inputuserfile(this->_userfilename.c_str());
    std::getline(inputuserfile, line);
    // std::cout << "user line: " << line << std::endl;
    while (std::getline(inputuserfile, line))
    {        
        // std::cout << "user line: " << line << std::endl;
        std::stringstream strstream(line);
        std::getline(strstream, key, '|') && strstream >> value;
        //earase all spaces around key aand value.
        key.erase(0, key.find_first_not_of(" \t\r\n"));
        key.erase(key.find_last_not_of(" \t\r\n") + 1);
        
        value.erase(0, value.find_first_not_of(" \t\r\n"));
        value.erase(value.find_last_not_of(" \t\r\n") + 1);
        FillUserData(userdata, key, value);
        // std::cout << "key: [" << key << "]" <<  std::endl;
        // std::cout << "value: [" << value << "]" <<  std::endl;
        // std::cout << "key: [" << userdata.key << "]" <<  std::endl;
        // std::cout << "value: [" << userdata.value << "]" <<  std::endl;
        for (std::multimap<std::string, data>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
        {
            if (!is_validDate(userdata))
            {
                if (userdata.btcValue >  2147483647)
                    std::cerr << "Error: too large a number." << std::endl;
                else
                    std::cerr << "Error: bad input => " << key << std::endl;
                break;
            }
            if (userdata.btcValue < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                break;
            }
            if (Is_DateExist(it, userdata))
            {
                std::cout << userdata.key << " => " << userdata.value << " = " << (*it).second.btcValue * userdata.btcValue << std::endl;
                break;
            }
            else if (key.compare((*it).second.key) < 0)
            {
                it--;
                std::cout << userdata.key << " => " << userdata.value << " = " << (*it).second.btcValue * userdata.btcValue << std::endl;
                break;
            }
        }
        cleanData(userdata);
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
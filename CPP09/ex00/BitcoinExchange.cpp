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
void    BitcoinExchange::FillDatabase()
{
    std::cout << "user: " << this->_userfilename << std::endl;
    std::cout << "database: " << this->_databasefilename << std::endl;
    std::string line, key, value;
    std::ifstream fs(this->_databasefilename.c_str());
    std::getline(fs, line);
    std::cout << "line: " << line << std::endl;
    while (std::getline(fs, line))
    {
        if (line.empty()) 
            continue;
        std::stringstream strstream(line);

        if (!std::getline(strstream, key, ','))
            continue;
        if (!std::getline(strstream, value, ','))
            continue;
        this->_database[key] = strtod(value.c_str(), NULL); // now atof gets full number
    }
    // printDataBase();
}

void    BitcoinExchange::printDataBase()
{
    for (std::map<std::string, double>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
    {
        std::cout << "key: "<< (*it).first << ", value: " << (*it).second << std::endl;
    }
}
void    BitcoinExchange::AnalyseUserInput()
{
    std::string line, key, value;
    std::ifstream inputuserfile(this->_userfilename.c_str());
    std::getline(inputuserfile, line);
    std::cout << "_userfilename: " << _userfilename << std::endl;
    while (std::getline(inputuserfile, line))
    {        
        std::stringstream strstream(line);
        std::getline(strstream, key, '|') && strstream >> value;
        // std::cout << "key: " << key << std::endl;
        // std::cout << "value: " << value << std::endl;
        key.erase(0, key.find_first_not_of(" \t\r\n"));
        key.erase(key.find_last_not_of(" \t\r\n") + 1);
    
        value.erase(0, value.find_first_not_of(" \t\r\n"));
        value.erase(value.find_last_not_of(" \t\r\n") + 1);
        int i = 2;
        for (std::map<std::string, double>::iterator it = this->_database.begin(); it != this->_database.end(); it++)
        {
            // std::cout << "key: "<< (*it).first << ", value: " << (*it).second << std::endl;
            if (!(*it).first.compare(key))
            {
                std::cout << "exist value at line: " << i << "  -   date: " << (*it).first <<  ", btc: " << (*it).second << std::endl;
                return;
            }
            else
                std::cout << "doesn't exist ..." << std::endl;
            i++;
        }
        /* code */
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
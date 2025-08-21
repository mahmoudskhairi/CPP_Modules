#include "BitcoinExchange.hpp"

int main(int ac, char*av[])
{
    try
    {
        if (ac != 2)
            throw std::runtime_error("invalid arguments!");
        std::string userfilename(av[1]);
        BitcoinExchange btc(userfilename);
        btc.FillDatabase();
        btc.AnalyseUserInput();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
#include "BitcoinExchange.hpp"

int main(int ac, char*av[])
{
    try
    {
        if (ac != 2)
            throw std::runtime_error("invalid arguments!");
        std::string userfilename(av[1]);
        BitcoinExchange btc(userfilename);
        btc.ParceData();
        // std::string s1("2011-01");
        // std::string s2("2010-03");
        // std::cout << s1.compare(s2) << std::endl;
        btc.AnalyseUserInput();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
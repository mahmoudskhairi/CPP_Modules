#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        try
        {
            std::string str = av[1];
            ScalarConverter::convert(str);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    // int x = 9;
    // std::cout << "float: " << static_cast<double>(x) << std::endl;
}
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
    else
        std::cout << "Please, Enter your input!" << std::endl;
}
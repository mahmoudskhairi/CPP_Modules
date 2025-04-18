#include "ScalarConverter.hpp"
bool    isImpossible(std::string input)
{
    if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
    {
        if (input == "nanf" || input.size() > 4)
            input.pop_back();
        std::cout << "char  : " << "impossible" << std::endl;
        std::cout << "int   : " << "impossible" << std::endl;
        std::cout << "float : " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;    
        return 1;
    } 
    return 0;
}
bool    isDouble(std::string &input)
{
    size_t i = 0;
    if (!input.size() || input.at(0) == '.')
        return 0;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size() && isdigit(input.at(i)))
        i++;
    if ((input.at(i) == '.' && isdigit(input.at(i - 1)) && i + 1 < input.size() && isdigit(input.at(i + 1))))
        i++;
    else
        return 0;
    while (i < input.size())
    {
        if (!isdigit(input.at(i)))
            return 0;
        i++;
    }
    return 1;
}
// is Int
bool    isInt(std::string &input)
{
    size_t i = 0;
    if (!input.size())
        return 0;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size())
    {
        if(!isdigit(input.at(i)))
            return 0;
        i++;
    }
    return 1;
}

// is Float
bool    isFloat(std::string &input)
{
    size_t i = 0;
    if (!input.size() || input.at(0) == '.')
        return 0;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size() && isdigit(input.at(i)))
        i++;
    if (i < input.size() && (input.at(i) == '.' && isdigit(input.at(i - 1)) && i + 1 < input.size() && isdigit(input.at(i + 1))))
        i++;
    else
        return 0;
    while (i < input.size())
    {
        if (!isdigit(input.at(i)))
        {
            if (input.at(i) == 'f' && i + 1 == input.size())
                return 1;
            else
                break ;
        }
        i++;
    }
    return 0;
}
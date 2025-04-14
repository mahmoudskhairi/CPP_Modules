#include "ScalarConverter.hpp"

ScalarConverter:: ScalarConverter(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Default constructor called!" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy Assignment operator called!" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
}
ScalarConverter::~ ScalarConverter()
{
    if (PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}

//analyse data.
// bool    isInvalid()
// {
// }
bool    isImpossible(std::string input)
{
    if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
        return 1;
    return 0;
}
bool    isInt(std::string &input)
{
    int i = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size())
    {
        std::cout << input.at(i) << std::endl;
        if(!isdigit(input.at(i)))
            return 0;
        i++;
    }
    return 1;
}
bool    isFloat(std::string &input)
{

}
bool    isDouble(std::string &input)
{
    int i = 0;
    bool flag = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size())
    {
        std::cout << input.at(i) << std::endl;
        if (input.at(i) == '.' && !flag)
        {
            if (!isdigit(input.at(i - 1)) || i + 1 == input.size() || !isdigit(input.at(i + 1)))
                throw ScalarConverter::InvalidInput();
            flag = 1;
        }
        if (!isdigit(input.at(i)))
        {
            if (input.at(i) == 'f' && flag)
            {
                if (i + 1 == input.size())
                    return 1;
                else
                    throw ScalarConverter::InvalidInput();
            }
            else
                throw ScalarConverter::InvalidInput();

        }
        i++;
    }
    return 1;
}
void    SetData(std::string str, data *PrintedData)
{

}
void    PrintData(data *PrintedData)
{

}
void    ScalarConverter::convert(std::string &input)
{
    data PrintedData;
    if (isImpossible(input))
        return;
    if (isInt(input))
    {
        SetData("INT", &PrintedData);
    }
    else if (isFloat(input))
    {
        SetData("FLOAT", &PrintedData);
    }
    else if (isDouble(input))
    {
        SetData("DOUBLE", &PrintedData);
    }
    else
        throw ScalarConverter::InvalidInput();
    PrintData(&PrintedData);
}

/*
+oo or -oo
    Division by zero (1.0f / 0.0f → +inff).
    Overflow (e.g., std::numeric_limits<float>::max() * 2.0f).
*/

/*
# nanf (Not a Number)
    Meaning:
    Represents an undefined or unrepresentable floating-point result.
    Stands for "Not a Number."

    Causes:
    0.0f / 0.0f (indeterminate form).
    sqrt(-1.0f) (imaginary number).
    Invalid operations (e.g., log(-1.0f)).
*/

/*
    In C++98, +inf, -inf, and nan are special floating-point
    values representing infinity and Not a Number in their double
    form (unlike +inff/-inff/nanf, which are float variants).
*/
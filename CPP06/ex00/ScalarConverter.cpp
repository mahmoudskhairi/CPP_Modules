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
    (void)other;
    return (*this);
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
    (void)other;
}
ScalarConverter::~ ScalarConverter()
{
    if (PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}

void    SetData(std::string input, std::string type, data *PrintedData)
{
    if (!type.compare("INT"))
    {
        PrintedData->Int = std::atoi(input.c_str());
        PrintedData->Char = static_cast<char>(PrintedData->Int);
        PrintedData->Float = static_cast<float>(PrintedData->Int);
        PrintedData->Double = static_cast<double>(PrintedData->Int);
    }
    else if (!type.compare("FLOAT"))
    {
        std::cout << "input:  " << input << std::endl;
        PrintedData->Float = std::atof(input.c_str());
        PrintedData->Int = static_cast<int>(PrintedData->Float);
        PrintedData->Char = static_cast<char>(PrintedData->Float);
        PrintedData->Double = static_cast<double>(PrintedData->Float);
    }
    else if (!type.compare("DOUBLE"))
    {
        PrintedData->Double = std::atof(input.c_str());
        PrintedData->Int = static_cast<int>(PrintedData->Double);
        PrintedData->Char = static_cast<char>(PrintedData->Double);
        PrintedData->Float = static_cast<float>(PrintedData->Double);
    }
    if (PrintedData->Char >= 32 && PrintedData->Char <= 126)
        std::cout << "char  : " << PrintedData->Char << std::endl;
    else
        std::cout << "char  : Non displayable" << std::endl;
    std::cout << "int   : " << PrintedData->Int << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << PrintedData->Float << "f" << std::endl;
    std::cout << "double: " << PrintedData->Double << std::endl;
    std::cout << "----------------------------" << std::endl;
}
void    PrintData(data *PrintedData)
{
    if (PrintedData->Char >= 32 && PrintedData->Char <= 126)
        std::cout << "char  : " << PrintedData->Char << std::endl;
    else
        std::cout << "char  : Non displayable" << std::endl;
    std::cout << "int   : " << PrintedData->Int << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << PrintedData->Float << "f" << std::endl;
    std::cout << "double: " << PrintedData->Double << std::endl; 
}
void    ScalarConverter::convert(std::string &input)
{
    data PrintedData;
    if (isImpossible(input))
        return;
    if (isInt(input))
    {
        SetData("INT", input ,&PrintedData);
    }
    else if (isFloat(input))
    {
        std::cout << "input:  " << input << std::endl;
        SetData("FLOAT", input ,&PrintedData);
    }
    else if (isDouble(input))
    {
        std::cout << "*****" << std::endl;
        SetData("DOUBLE", input ,&PrintedData);
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
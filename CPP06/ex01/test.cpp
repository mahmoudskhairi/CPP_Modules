#include <iostream>
#include <iomanip>
bool    isDouble(std::string &input)
{
    int i = 0;
    bool flag = 0;
    bool DecimalPoint = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (!input.size() || input.at(0) == '.')
    {
        std::cerr << "invalid input" << std::endl;
        return 0;
    }
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size() && isdigit(input.at(i)))
    {
        std::cout << input.at(i) << std::endl;
        i++;
    }
    if (i < input.size() && (input.at(i) == '.' && isdigit(input.at(i - 1)) && i + 1 < input.size() && isdigit(input.at(i + 1))))
    {
        std::cout << "hello" << std::endl;
        DecimalPoint = 1;
        i++;
    }
    else
    {
        std::cerr << "invalid input" << std::endl;
        return 0;
    }
    while (i < input.size())
    {
        std::cout << input.at(i) << std::endl;
        if (!isdigit(input.at(i)))
        {
        std::cerr << "invalid input" << std::endl;
            return 0;
        }
        i++;
    }
    return 1;
}

bool    isInt(std::string &input)
{
    int i = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (!input.size())
    {
        std::cerr << "invalid input" << std::endl;
        return 0;
    }
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
    int i = 0;
    bool flag = 0;
    bool DecimalPoint = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (!input.size() || input.at(0) == '.')
    {
        std::cerr << "invalid input" << std::endl;
        return 0;
    }
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size() && isdigit(input.at(i)))
    {
        std::cout << input.at(i) << std::endl;
        i++;
    }
    if (i < input.size() && (input.at(i) == '.' && isdigit(input.at(i - 1)) && i + 1 < input.size() && isdigit(input.at(i + 1))))
    {
        std::cout << "hello" << std::endl;
        DecimalPoint = 1;
        i++;
    }
    else
    {
        std::cerr << "invalid input" << std::endl;
        return 0;
    }
    while (i < input.size())
    {
        std::cout << input.at(i) << std::endl;
        if (!isdigit(input.at(i)))
        {
            if (input.at(i) == 'f' && i + 1 == input.size())
                return 1;
            else
            {
                std::cerr << "invalid input" << std::endl;
                    return 0;
            }
        }
        i++;
    }
    return 0;
}


bool    isImpossible(std::string input)
{
    // std::cout << "input: " << input << std::endl;
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
struct data
{
    int Int;
    double Double;
    float Float;
    char Char;
};
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
        PrintedData->Float = std::atof(input.c_str());
        std::cout << "-->  " << PrintedData->Float << std::endl;
        PrintedData->Int = static_cast<int>(PrintedData->Float);
        PrintedData->Char = static_cast<char>(PrintedData->Float);
        PrintedData->Double = static_cast<double>(PrintedData->Float);
    }
    else if (!type.compare("DOUBLE"))
    {
        PrintedData->Double = std::atof(input.c_str());
        std::cout << "-->  " << PrintedData->Double << std::endl;
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
}
int main(int ac, char *av[])
{
    data d;
    std::string str = "+inff";
    // std::cout << isDouble(str) << std::endl;
    // std::cout << isImpossible(str) << std::endl;
    SetData("66.5f", "INT" ,&d);
}
// while (i < input.size())
// {
//     std::cout << input.at(i) << std::endl;
//     if (input.at(i) == '.' && !flag)
//     {
//         if (!isdigit(input.at(i - 1)) || i + 1 == input.size() || !isdigit(input.at(i + 1)))
//             return 0;
//             flag = 1;
//     }
//     else if (!isdigit(input.at(i)))
//     {
//         if (input.at(i) == 'f' && flag)
//         {
//             if (i + 1 == input.size())
//                 return 1;
//             else
//                 return 0;
//         }
//         else
//             return 0;
//     }
//     i++;
// }
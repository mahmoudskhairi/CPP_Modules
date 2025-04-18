#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <exception>
#include <iomanip>

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

struct data
{
    int Int;
    double Double;
    float Float;
    char Char;
};
class  ScalarConverter
{
private:
    std::string _Type;
public:
    //canonical form.
     ScalarConverter(/* args */);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter & operator=(const ScalarConverter &other);
    ~ScalarConverter();
    //others
    static void convert(std::string &input);
    class   InvalidInput : public std::exception
    {
        const char* what() const throw(){return ("Invalid Input!");}
    };
};

//analyse data.
bool    isInt(std::string &input);
bool    isFloat(std::string &input);
bool    isDouble(std::string &input);
bool    isImpossible(std::string input);

#endif
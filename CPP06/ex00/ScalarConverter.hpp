#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <exception>

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

struct data
{
    int I;
    double D;
    float F;
    char C;
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
    //analyse data.
    static void convert(std::string &input);
    class   InvalidInput : public std::exception
    {
        const char* what() const throw(){return ("Invalid Input!");}
    };
};

#endif
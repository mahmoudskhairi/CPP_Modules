#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
    {
    //c++98 flag
        // handling(error) of overflow and underflow  !
        // precision !!
        /*
        - As this class doesn’t need to store anything at all, it must not be instantiable by users.
         Except for char parameters, only the decimal notation will be used.
        - review:
            std::fixed!
            static_cast!
            special floating_point values!
        */
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
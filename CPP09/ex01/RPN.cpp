#include "RPN.hpp"

std::stack<int>    &RPN(std::string &str)
{
    //"8 9 * 9 - 9 - 9 - 4 - 1 +"
    std::stack<int> mystack;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str.at(i) == ' ')
            continue;
        else if (!std::isdigit(str.at(i)))
        {
            if (mystack.size() > 1)
                throw std::runtime_error("Error\n");
            mystack.push(str.at(i) - 48);
        }
        else if ()
        else
            throw std::runtime_error("Error\n");
        return mystack;
    }
    
}

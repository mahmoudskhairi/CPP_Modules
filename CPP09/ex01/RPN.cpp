#include "RPN.hpp"

std::stack<int>    RPN(std::string &str)
{
    //"9  * 9 - 9 - 9 - 4 - 1 +"
    std::stack<int> mystack;
    // std::cout << "str: " << str << std::endl;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str.at(i) == ' ')
        {
            continue;
        }
        else if (std::isdigit(str.at(i)))
        {
            mystack.push(str.at(i) - 48);
        }
        else if (str.at(i) == '*' || str.at(i) == '/' || str.at(i) == '+' || str.at(i) == '-')
        {
            if (mystack.size() < 2)
                throw std::runtime_error("operation Error\n");
            int b = mystack.top();
            mystack.pop();
            int a = mystack.top();
            mystack.pop();
            int result = 0;
            std::cout << "a: " << a << std::endl;
            std::cout << "b: " << b << std::endl;
            if (str.at(i) == '*')
                result = a * b;
            else if (str.at(i) == '/')
            {
                if (b == 0)
                    throw::std::runtime_error("impossible operation");
                result =  a / b;
            }
            else if (str.at(i) == '+')
                result =  a + b;
            else if (str.at(i) == '-')
            {
                    result =  a - b;
            }
            std::cout << "result = " << result << std::endl;
            mystack.push(result);
        }
        else
            throw std::runtime_error("invalid element in your input\n");
    }
    if (mystack.size() != 1)
        throw std::runtime_error("stack has more than one element as result\n");
    // for (size_t i = 0; i < mystack.size(); i++)
    // {
    //     std::cout << "s: "  << mystack.top() ;
    //     mystack.pop();
    // }
    // std::cout << std::endl;    
    return mystack;
}

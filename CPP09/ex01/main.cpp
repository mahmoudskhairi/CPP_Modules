#include "RPN.hpp"

int main(int ac, char*av[])
{
    //"8 9 * 9 - 9 - 9 - 4 - 1 +"
    if (ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    try
    {
        std::string input(av[1]);
        std::stack<int> &stack =  RPN(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
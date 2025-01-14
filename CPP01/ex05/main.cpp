#include "Harl.hpp"

int main()
{
    Harl MyHarl;
    bool flag = true;
    std::string input;
    do
    {
        std::cout << "Enter ur input: " << std::flush;
        getline(std::cin, input);
        if (!std::cin.good())
        {
            std::cerr << "\nSorry, input error!" << std::endl;
            return(EXIT_FAILURE);
        }
        if (!input.compare("EXIT") || !input.compare("exit"))
        {
            std::cout << "[EXIT]" << std::endl;
            flag = false;
        }
        else
            MyHarl.complain(input);
    } while (flag);
}
#include "Harl.hpp"

int main()
{
    Harl MyHarl;
    bool flag = true;
    std::string input;
    if (!std::cin.good())
        std::cerr << "Sorry, input error!" << std::endl;
    do
    {
        std::cout << "Enter ur input: " << std::flush;
        getline(std::cin, input);
        if (!input.compare("EXIT") || !input.compare("exit"))
        {
            std::cout << "[EXIT]" << std::endl;
            flag = false;
        }
        else
            MyHarl.complain(input);
    } while (flag);
}
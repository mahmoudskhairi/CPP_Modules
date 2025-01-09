#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl MyHarl;
    std::string input;
    if (ac != 2)
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << std::endl;
    else
    {
        input = av[1];
        MyHarl.complain(input);
    }
}
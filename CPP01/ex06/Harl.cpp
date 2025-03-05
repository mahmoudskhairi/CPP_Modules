#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]\n"
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
              << std::endl;
}
void Harl::info(void)
{
    std::cout << "[INFO]\n"
              << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger !If you did, I wouldn't be asking for more!"
              << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[WARNING]\n"
              << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
              << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ERROR]\n"
              << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}
void Harl::complain(std::string level)
{
    int i = 0;
    std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptrMethod methods[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (level.compare(input[i]) && i < 4)
        i++;
    switch (i)
    {
    case 0:
        (this->*methods[0])();
    case 1:
        (this->*methods[1])();
    case 2:
        (this->*methods[2])();
        
    case 3:
        (this->*methods[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << std::endl;
        break;
    }
}
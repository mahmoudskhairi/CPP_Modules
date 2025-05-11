/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:03 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:30:23 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    // void (Harl::*ptrMethode[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    ptrMethod methods[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (level.compare(input[0]) && level.compare(input[1]) && level.compare(input[2]) && level.compare(input[3]))
        std::cerr << "invalid input!" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(input[i]))
        {
            (this->*methods[i])();
            break;
        }
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:16 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:28:18 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
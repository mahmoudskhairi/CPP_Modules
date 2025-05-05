/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:35 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:28:37 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
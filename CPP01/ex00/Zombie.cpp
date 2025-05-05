/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:26:48 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:26:51 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
    _Name = Name;
}

void Zombie::announce(void)
{
    std::cout << this->_Name
              << " : BraiiiiiiinnnzzzZ..."
              << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_Name
              << ", must be destroyed"
              << std::endl;
}
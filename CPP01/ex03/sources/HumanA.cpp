/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:39 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:30:23 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

// HumanA::HumanA()
// {
//     // std::cout << "@ HumanA constructors !!" << std::endl;
// }
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA parameterize constructors !!" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA destructors !!" << std::endl;
}
void HumanA::attack()
{
    if (this->_weapon.getType() != "")
    {
        std::cout << this->_name << " attacks with their "
                  << this->_weapon.getType() << std::endl;
    }
    else
        std::cout << "check the type value inputted please, it's empty!" << std::endl;
}
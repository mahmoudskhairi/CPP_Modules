/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:29 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:31 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;

public:
    // HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};
#endif
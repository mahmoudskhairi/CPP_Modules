/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:26:55 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:26:57 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
private:
    std::string _Name;

public:
    Zombie(std::string Name);
    ~Zombie();
    void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:10 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:12 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
private:
    std::string _ZombieName;

public:
    Zombie();
    // Zombie(std::string name);
    ~Zombie();
    void Announce(void);
    void SetName(std::string Name);
};

Zombie *zombieHorde(int N, std::string name);
#endif
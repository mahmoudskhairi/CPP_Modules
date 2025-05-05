/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:15 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:18 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        std::cout << "Please enter a valid number of Zombies"
                  << std::endl;
        exit(EXIT_FAILURE);
    }
    Zombie *ZombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        ZombieHorde[i].SetName(name);
        // ZombieHorde[i] = Zombie(name);// by using this way, we have a temporary object that we will set it to Zombie[i] variable as a copy , after this statement it will be destroyed
    }
    return (ZombieHorde);
}
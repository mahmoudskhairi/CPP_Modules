/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:02 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:04 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 3
void ll()
{
    system("leaks -q Zombie");
}
int main()
{
    atexit(ll);
        Zombie *Horde = zombieHorde(N, "mahmoud");
        for (int i = 0; i < N; i++)
        {
            Horde[i].Announce();
        };
        delete[] Horde;
    }

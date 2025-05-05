/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:45 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:47 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

void ll()
{
    system("leaks -q Zombie");
}
int main()
{
    {
        Weapon club = Weapon("crude spiked club"); // we copy the temporary object into the club variable
        // this way initialazing an object is cleaner and better.
        HumanA bob("Bob", club); // we create a HumanA object , with an initializing of their data members
        bob.attack();
        club.setType("some other type of club"); // the value of the type is restored
        bob.attack();
    }
    std::cout << "\n-------------------------------------\n";
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        // jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
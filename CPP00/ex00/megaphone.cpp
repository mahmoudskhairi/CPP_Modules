/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:25:26 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:25:28 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int    ac, char    *av[])
{
    int i = 1;
    int j;
    
    if (ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while (av[i][j])
                std::cout << (char)toupper(av[i][j++]);
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
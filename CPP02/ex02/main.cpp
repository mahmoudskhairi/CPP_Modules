/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:49:06 by mskhairi          #+#    #+#             */
/*   Updated: 2025/03/05 15:04:43 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a(2);
    // Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed b(2);
    std::cout << --a << std::endl;
    std::cout << b-- << std::endl;
    std::cout << b << std::endl;
    // if (a == b)
    // std::cout << "yes" << std::endl;
    // else
    // std::cout << "no" << std::endl;

    // // std::cout << Fixed(5.05f) * Fixed(2) << std::endl;
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    std::cout << "max : " << Fixed::max(a, b) << std::endl;
    std::cout << "min : " << Fixed::min(a, b) << std::endl;
    return 0;
}

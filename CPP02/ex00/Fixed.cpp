/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:49:23 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/11 12:48:56 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_FractionnalBits = 8;
Fixed::Fixed() : _FixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &OldFixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = OldFixed;
}

Fixed &Fixed::operator=(Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->_FixedPoint = raw;
}

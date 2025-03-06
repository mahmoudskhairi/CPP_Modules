/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:49:13 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/11 12:51:38 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_FractionnalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int FixedValue) : _FixedPoint(FixedValue << _FractionnalBits)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float FloatValue) : _FixedPoint(roundf(FloatValue * (1 << _FractionnalBits)))
{
    std::cout << "Float constructor called" << std::endl;
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

Fixed::Fixed(const Fixed &CopiedFixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = CopiedFixed;
}
Fixed &Fixed::operator=(const Fixed &CopiedFixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &CopiedFixed)
        this->setRawBits(CopiedFixed._FixedPoint);
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// to_float() and to_int()

int Fixed::toInt(void) const
{
    return (this->_FixedPoint >> this->_FractionnalBits);
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_FixedPoint) / (1 << this->_FractionnalBits));
}

// overload of insertion operation

std::ostream &operator<<(std::ostream &OutStraem, const Fixed &fixed)
{
    // OutStraem << fixed.toFloat();
    return (OutStraem << fixed.toFloat());
}
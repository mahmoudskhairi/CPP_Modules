/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:47:01 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/07 21:29:41 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int i = 0;
int j = 0;
int Fixed::_FractionnalBits = 8;
/* Default constructor*/
Fixed::Fixed() : _FixedPoint(0)
{
}

/* Parameterized constructors*/
Fixed::Fixed(const int FixedValue) : _FixedPoint(FixedValue << _FractionnalBits)
{
    // std::cout << "I-> " << FixedValue << std::endl;
    // std::cout << "i = " << i++ << " :int# " << _FixedPoint << std::endl;
}

Fixed::Fixed(const float FloatValue) : _FixedPoint((roundf(FloatValue * (1 << _FractionnalBits))))
{
    // std::cout << "F-> " << FloatValue << std::endl;
    // std::cout << "j= " << j++ << " :float# " << _FixedPoint << std::endl;
    // std::cout << "q=" << this->_Y << std::endl;
    // std::cout << "-=" << x << std::endl;
    // std::cout << "-=" << y << std::endl;
}

/* Copy Constructor*/

Fixed::Fixed(const Fixed &CopiedFixed)
{
    // this->setRawBits(CopiedFixed.getRawBits());
    *this = CopiedFixed;
}

/* conversion methods */
float Fixed::toFloat(void) const
{
    // std::cout << " :Float# " << _FixedPoint << std::endl;
    // // std::cout << " :_FractionnalBits: " << _FractionnalBits << std::endl;
    // std::cout << " :To Float# " << (float)(_FixedPoint) / (1 << _FractionnalBits) << std::endl;
    // std::cout << "*" << (int)(1 << this->_FractionnalBits) << std::endl;
    return (float)(this->_FixedPoint) / (1 << this->_FractionnalBits);
}

int Fixed::toInt(void) const
{
    // std::cout << " :int# " << _FixedPoint << std::endl;
    // std::cout << " :To int# " << (_FixedPoint >> _FractionnalBits) << std::endl;
    return (this->_FixedPoint >> this->_FractionnalBits);
}

/* setters & getters */
int Fixed::getRawBits(void) const
{
    return (this->_FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->_FixedPoint = raw;
}

/* Destructor */
Fixed::~Fixed()
{
}

/* Arithmetic Operators*/
Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}
Fixed Fixed::operator+(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed Fixed::operator*(const Fixed &fixed) const
{

    // std::cout << "me: " << this->toFloat() << std::endl;
    // std::cout << "other: " << fixed.toFloat() << std::endl;
    // std::cout << "*: " << ((this->toFloat() * fixed.toFloat())) << std::endl;
    // Fixed result =
    return (Fixed((this->toFloat() * fixed.toFloat())));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return (Fixed((this->toFloat() / fixed.toFloat())));
}
// Fixed &Fixed::operator*=(const int x)
// {
//     this->_FixedPoint *= (x << this->_FractionnalBits);
//     return (*this);
// }

/* Comparison Operators*/
bool Fixed::operator>(const Fixed ComparedFixed)
{
    return (this->getRawBits() > ComparedFixed.getRawBits());
}
bool Fixed::operator<(const Fixed ComparedFixed)
{
    return (this->getRawBits() < ComparedFixed.getRawBits());
}
bool Fixed::operator>=(const Fixed ComparedFixed)
{
    return (this->getRawBits() >= ComparedFixed.getRawBits());
}
bool Fixed::operator<=(const Fixed ComparedFixed)
{
    return (this->getRawBits() <= ComparedFixed.getRawBits());
}
bool Fixed::operator==(const Fixed ComparedFixed)
{
    return (this->getRawBits() == ComparedFixed.getRawBits());
}
bool Fixed::operator!=(const Fixed ComparedFixed)
{
    return (this->getRawBits() != ComparedFixed.getRawBits());
}

/* prefix and postfix increment */
Fixed &Fixed::operator++(void)
{
    ++this->_FixedPoint;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_FixedPoint++;
    return (tmp);
}

/* prefix and postfix dicrement */
Fixed &Fixed::operator--(void)
{
    --this->_FixedPoint;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_FixedPoint--;
    return (tmp);
}

/* max and min methods*/
const Fixed &Fixed::min(Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

/* Insertion Operator */
std::ostream &operator<<(std::ostream &OutStrem, const Fixed &Fixed)
{
    OutStrem << Fixed.toFloat();
    return (OutStrem);
}

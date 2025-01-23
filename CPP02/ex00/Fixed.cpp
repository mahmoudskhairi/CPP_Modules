#include "Fixed.hpp"

Fixed::Fixed() : _FixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &OldFixed)
{
    // if (this == &OldFixed)
    //     return(*this);
    std::cout << "Copy constructor called" << std::endl;
    this->_FixedPoint = OldFixed.getRawBits();
}

void Fixed::operator=(Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return;
    this->_FixedPoint = fixed.getRawBits();
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
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
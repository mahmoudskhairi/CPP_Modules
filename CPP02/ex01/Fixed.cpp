#include "Fixed.hpp"

Fixed::Fixed()
{
}

Fixed::Fixed(const int FixedValue)
{
    this->_FixedPoint = FixedValue << this->_FractionnalBits;
}
Fixed::Fixed(const float FloitValue)
{
    this->_FixedPoint = FloitValue * roundf(1 << this->_FractionnalBits);
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
    if (this != &CopiedFixed)
    {
        // this->setRawBits(CopiedFixed.getRawBits());
        *this = CopiedFixed;
    }
}
Fixed &Fixed::operator=(Fixed const &Main)
{

    return (*this);
}

Fixed::~Fixed()
{
}
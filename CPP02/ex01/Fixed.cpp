#include "Fixed.hpp"

int _ Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int FixedValue) : _FixedPoint(FixedValue << _FractionnalBits)
{
    std::cout << "Int constructor called" << std::endl;
    // this->_FixedPoint = FixedValue << this->_FractionnalBits;
}
Fixed::Fixed(const float FloatValue) : _FixedPoint(FloatValue * roundf(1 << _FractionnalBits))
{
    std::cout << "Float constructor called" << std::endl;
    // this->_FixedPoint = FloitValue * roundf(1 << this->_FractionnalBits);
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
    if (this != &CopiedFixed)
        *this = CopiedFixed;
}
Fixed &Fixed::operator=(const Fixed &CopiedFixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &CopiedFixed)
        this->setRawBits(CopiedFixed.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
}

// to_float() and to_int()

int Fixed::toInt(void) const
{
    return (this->getRawBits() >> this->_FractionnalBits);
}

float Fixed::toFloat(void) const
{
    return (float(this->_FixedPoint) / (1 << this->_FractionnalBits));
}

// overload of insertion operation

std::ostream &operator<<(std::ostream &OutStraem, const Fixed &fixed)
{
    // OutStraem << fixed.toFloat();
    return (OutStraem << fixed.toFloat());
}
#include "Fixed.hpp"

/* Default constructor*/
Fixed::Fixed() : _FixedPoint(0)
{
}

/* Parameterized constructors*/
Fixed::Fixed(const int FixedValue) : _FixedPoint(FixedValue << _FractionnalBits)
{
}

Fixed::Fixed(const float FloatValue) : _FixedPoint(roundf(FloatValue * (1 << _FractionnalBits)))
{
}

/* Copy Constructor*/

Fixed::Fixed(const Fixed &CopiedFixed)
{
    this->setRawBits(CopiedFixed.getRawBits());
}

/* conversion methods */
float Fixed::toFloat(void) const
{
    return (this->_FixedPoint / (1 >> this->_FractionnalBits));
}

int Fixed::toInt(void) const
{
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
Fixed Fixed::operator+(const Fixed &fixed)
{
    return (Fixed(this->getRawBits() + fixed.getRawBits()));
}
Fixed Fixed::operator-(const Fixed &fixed)
{
    return (Fixed(this->getRawBits() - fixed.getRawBits()));
}
Fixed Fixed::operator*(const Fixed &fixed)
{
    return (Fixed(this->getRawBits() * fixed.getRawBits()));
}
Fixed Fixed::operator/(const Fixed &fixed)
{
    return (Fixed(this->getRawBits() / fixed.getRawBits()));
}

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

Fixed &Fixed::operator++(void)
{
    ++this->_FixedPoint;
    return (*this);
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
std::ostream &operator<<(std::ostream &OutStrem, Fixed &Fixed)
{
    OutStrem << Fixed.toFloat();
    return (OutStrem);
}

#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _FixedPoint;
    static int _FractionnalBits;

public:
    /* default constructor*/
    Fixed();

    /* parameterized constructors*/
    Fixed(const int FixedValue);
    Fixed(const float FloatValue);

    /* copy constructor*/
    Fixed(const Fixed &CopiedFixed);

    /* convesion methods*/
    float toFloat(void) const;
    int toInt(void) const;

    /* getters & setters*/
    int getRawBits(void) const;
    void setRawBits(int const raw);

    /* comparison operators */
    bool operator>(const Fixed ComparedFixed);
    bool operator<(const Fixed ComparedFixed);
    bool operator>=(const Fixed ComparedFixed);
    bool operator<=(const Fixed ComparedFixed);
    bool operator==(const Fixed ComparedFixed);
    bool operator!=(const Fixed ComparedFixed);
    /* arithmetic operators */
    Fixed &operator=(Fixed const &fixed);
    Fixed operator+(Fixed const &fixed);
    Fixed operator-(Fixed const &fixed);
    Fixed operator*(Fixed const &fixed);
    Fixed operator/(Fixed const &fixed);
    /* increment and decrement operators*/
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    ~Fixed();
};
/* insertion operator */
std::ostream &operator<<(std::ostream &OutStraem, const Fixed &fixed);
#endif
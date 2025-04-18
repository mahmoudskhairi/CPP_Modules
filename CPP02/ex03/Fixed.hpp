
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
    /* assignment operators */
    Fixed &operator=(Fixed const &fixed);
    // Fixed &operator*=(const int x);
    Fixed operator+(Fixed const &fixed) const;
    Fixed operator-(Fixed const &fixed) const;
    Fixed operator*(Fixed const &fixed) const;
    Fixed operator/(Fixed const &fixed) const;
    /* increment and decrement operators*/
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    /* min and max methods*/
    static const Fixed &min(Fixed &a, const Fixed &b);
    static const Fixed &max(Fixed &a, const Fixed &b);

    ~Fixed();
};
/* insertion operator */
std::ostream &operator<<(std::ostream &OutStraem, const Fixed &fixed);
#endif
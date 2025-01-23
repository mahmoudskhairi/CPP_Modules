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
    Fixed();
    Fixed(const int FixedValue);
    Fixed(const float FloatValue);
    Fixed(const Fixed &CopiedFixed);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed &operator=(Fixed const &Main);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &OutStraem, const Fixed &fixed);
#endif
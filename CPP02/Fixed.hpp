#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>

class Fixed
{
private:
    int _FixedPoint;
    static int _FractionnalBits;

public:
    Fixed();
    Fixed(Fixed &OldFixed);
    void operator=(Fixed &fixed);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
#endif
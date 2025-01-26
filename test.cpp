#include <iostream>
#include <cmath>

class Fixed
{
private:
    // static int _FractionnalBits;

public:
    int _FixedPoint;
    /* default constructor*/
    Fixed() : _FixedPoint(0) {}

    /* arithmetic operators */
    Fixed operator=(Fixed const fixed)
    {
        if (this != &fixed)
            this->_FixedPoint = fixed._FixedPoint;
        return (*this);
    }
    Fixed operator++(int)
    {
        Fixed tmp(*this);
        this->_FixedPoint++;
        Fixed &tmp2 = tmp;
        return (tmp2);
    }
    Fixed &operator++(void)
    {
        // Fixed tmp(*this);
        ++this->_FixedPoint;
        // Fixed &tmp2 = tmp;
        return (*this);
    }
    // Fixed &operator-(Fixed const &fixed);
    ~Fixed() {}
};

std::ostream &operator<<(std::ostream &OutStrem, Fixed &Fixed)
{
    OutStrem << Fixed._FixedPoint;
    return (OutStrem);
}

int main()
{
    // int b = 1;
    // std::cout << "a:" << a._FixedPoint << std::endl;

    // int &ref = b;
    // int &ref2 = ref;
    Fixed a;
    a._FixedPoint = 2;
    Fixed b(a);
    Fixed c(a);

    // std::cout << "ref: " << ref << std::endl;
    // std::cout << "ref2: " << ref2 << std::endl;
    std::cout << "a: " << a._FixedPoint << std::endl;
    std::cout << "b: " << b._FixedPoint << std::endl;
    std::cout << "c: " << c._FixedPoint << std::endl;
    a._FixedPoint = 3;
    std::cout << "------------------------\n";
    std::cout << "a: " << a._FixedPoint << std::endl;
    std::cout << "b: " << b._FixedPoint << std::endl;
    std::cout << "c: " << c._FixedPoint << std::endl;
    c = b = a;
    std::cout << "------------------------\n";
    std::cout << "a: " << a._FixedPoint << std::endl;
    std::cout << "b: " << b._FixedPoint << std::endl;
    std::cout << "c: " << c._FixedPoint << std::endl;
    std::cout << "------------------------\n";
    std::cout << "c: " << c++ << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "------------------------\n";
    std::cout << "c: " << ++c << std::endl;
    std::cout << "c: " << c << std::endl;
    // a._FixedPoint = 1;

    // b = a = c;
    // std::cout << "a: " << a._FixedPoint << std::endl;
    // std::cout << "b: " << b._FixedPoint << std::endl;
    // std::cout << "c: " << c._FixedPoint << std::endl;
}
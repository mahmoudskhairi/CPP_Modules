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
    Fixed operator=(Fixed const &fixed)
    {
        if (this != &fixed)
            this->_FixedPoint = fixed._FixedPoint;
        return (*this);
    }
    Fixed &operator+(Fixed const &fixed);
    Fixed &operator-(Fixed const &fixed);
    ~Fixed() {}
};

int main()
{
    int b = 1;
    // std::cout << "a:" << a._FixedPoint << std::endl;

    int &ref = b;
    int &ref2 = ref;
    // Fixed c;
    // c._FixedPoint = 2;
    std::cout << "ref: " << ref << std::endl;
    std::cout << "ref2: " << ref2 << std::endl;
    // std::cout << "b: " << b._FixedPoint << std::endl;
    // std::cout << "c: " << c._FixedPoint << std::endl;
    // a._FixedPoint = 1;
    // b = a = c;
    // std::cout << "a: " << a._FixedPoint << std::endl;
    // std::cout << "b: " << b._FixedPoint << std::endl;
    // std::cout << "c: " << c._FixedPoint << std::endl;
}
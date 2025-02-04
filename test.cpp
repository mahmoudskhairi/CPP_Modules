#include <iostream>
#include <cmath>

class Fixed
{
protected:
    // static int _FractionnalBits;
    int _FixedPoint;

public:
    /* default constructor*/
    Fixed() : _FixedPoint(0)
    {
        std::cout << "fixed constructor in here" << std::endl;
    }
    int getFixed()
    {
        return (this->_FixedPoint);
    }
    void setFixed(int n)
    {
        this->_FixedPoint = n;
    }
    /* arithmetic operators */
    Fixed operator=(Fixed const fixed)
    {
        if (this != &fixed)
            this->_FixedPoint = fixed._FixedPoint;
        return (*this);
    }

    // Fixed &operator-(Fixed const &fixed);
    ~Fixed()
    {

        std::cout << "fixed destructor in here" << std::endl;
    }
};
class child : private Fixed
{
public:
    child()
    {
        std::cout << Fixed::getFixed() << "child constructor in here" << std::endl;
    }
    ~child()
    {

        std::cout << "child destructor in here" << std::endl;
    }
};

int main()
{
    // int b = 1;
    // std::cout << "a:" << a._FixedPoint << std::endl;

    // int &ref = b;
    // int &ref2 = ref;
    // Fixed a;
    child b;
    // std::cout << b.g << std::endl;
}
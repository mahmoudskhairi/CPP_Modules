#include "Point.hpp"

Point::Point() : _X(0), _Y(0)
{
}

Point::Point(const float x, const float y) : _X(x), _Y(y)
{
    std::cout << "=" << x << std::endl;
    std::cout << "=" << y << std::endl;
}

Point::Point(Point &point) : _X(point.GetX()), _Y(point.GetY())
{
}

Point &Point::operator=(Point &AssignedPoint)
{
    if (this != &AssignedPoint)
    {
        this->_X = AssignedPoint.GetX();
        this->_Y = AssignedPoint.GetY();
    }
    return (*this);
}

Fixed Point::GetX(void) const
{
    return (this->_X);
}

Fixed Point::GetY(void) const
{
    return (this->_Y);
}

Point::~Point()
{
}

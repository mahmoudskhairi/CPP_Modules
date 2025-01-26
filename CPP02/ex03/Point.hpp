#ifndef _POINT_HPP_
#define _POINT_HPP_
#include "Fixed.hpp"

class Point
{
private:
    Fixed _X;
    Fixed _Y;

public:
    Point();
    Point(const float x, const float y);
    Point(Point &point);
    Point &operator=(Point &point);
    Fixed GetX(void) const;
    Fixed GetY(void) const;
    ~Point();
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif

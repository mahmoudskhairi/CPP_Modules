
#include "Point.hpp"

Fixed abs(Fixed x)
{
    if (x < 0)
        return (x * -1);
    return (x);
}

Fixed area(Point const &a, Point const &b, Point const &c)
{
    return ((a.GetX() * (b.GetY() - c.GetY())) + b.GetX() * (c.GetY() - a.GetY()) + c.GetX() * (a.GetY() - b.GetY()));
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    bool flag = 1;

    Fixed areaT = abs(area(a, b, c)) / 2;
    Fixed area1 = abs(area(a, b, point)) / 2;
    Fixed area2 = abs(area(a, point, c)) / 2;
    Fixed area3 = abs(area(point, b, c)) / 2;
    if (area1 == 0 || area2 == 0 || area3 == 0)
        flag = 0;
    if (!flag || areaT - (area1 + area2 + area3) < 0)
    {
        std::cout << "outside" << std::endl;
        return (0);
    }
    std::cout << "inside" << std::endl;
    return (1);
}
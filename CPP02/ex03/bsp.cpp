
#include "Point.hpp"

static Fixed abs(Fixed x)
{
    std::cout << "before x  :" << x << std::endl;
    if (x < 0)
        return (x * -1);
    // x *= -1;
    std::cout << "after x  :" << x << std::endl;
    return (x);
}

static Fixed area(Point const &a, Point const &b, Point const &c)
{
    // std::cout << "a--->" << a.GetX() << std::endl;
    // std::cout << "a--->" << a.GetY() << std::endl;
    // std::cout << "b--->" << b.GetX() << std::endl;
    // std::cout << "b--->" << b.GetY() << std::endl;
    // std::cout << "c--->" << c.GetX() << std::endl;
    // std::cout << "c--->" << c.GetY() << std::endl;
    // std::cout << "wwwww:  --->" << (a.GetX() * (b.GetY() - c.GetY()) + (b.GetX() * (c.GetY() - a.GetY())) + (c.GetX() * (a.GetY() - b.GetY()))) << std::endl;
    // std::cout << "area --->" << (abs((a.GetX() * (b.GetY() - c.GetY())) + (b.GetX() * (c.GetY() - a.GetY())) + (c.GetX() * (a.GetY() - b.GetY())))) << std::endl;
    // std::cout << "---------------------------------------\n";

    return (a.GetX() * (b.GetY() - c.GetY())) + b.GetX() * (c.GetY() - a.GetY()) + c.GetX() * (a.GetY() - b.GetY());
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaT = abs(area(a, b, c) / 2);
    Fixed area1 = abs(area(a, b, point) / 2);
    Fixed area2 = abs(area(a, point, c) / 2);
    Fixed area3 = abs(area(point, b, c) / 2);
    std::cout << "T=" << areaT << std::endl;
    std::cout << "1=" << area1 << std::endl;
    std::cout << "2=" << area2 << std::endl;
    std::cout << "3=" << area3 << std::endl;
    if (areaT != area1 + area2 + area3)
    {
        std::cout << "outside" << std::endl;
        return (0);
    }
    std::cout << "inside" << std::endl;
    return (1);
}
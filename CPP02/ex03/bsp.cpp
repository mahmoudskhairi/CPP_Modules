
#include "Point.hpp"

static Fixed abs(Fixed x)
{
    if (x >= 0)
        std::cout << "x  :" << x << std::endl;

    else
        std::cout << "x  :" << x * -1 << std::endl;
    if (x < 0)
        return (x * -1);
    std::cout << "---------------------------\n";
    return (x);
}

static Fixed area(Point const &a, Point const &b, Point const &c)
{
    return ((a.GetX() * (b.GetY() - c.GetY())) + b.GetX() * (c.GetY() - a.GetY()) + c.GetX() * (a.GetY() - b.GetY()) / 2);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    bool flag = 1;

    std::cout << "----------------------------------------\n";
    std::cout << "X=" << a.GetX() << " Y=" << a.GetY() << std::endl;
    std::cout << "X=" << b.GetX() << " Y=" << b.GetY() << std::endl;
    std::cout << "X=" << c.GetX() << " Y=" << c.GetY() << std::endl;
    std::cout << "X=" << point.GetX() << " Y=" << point.GetY() << std::endl;
    std::cout << "----------------------------------------\n";
    Fixed areaT = abs(area(a, b, c));
    Fixed area1 = abs(area(a, b, point));
    Fixed area2 = abs(area(a, point, c));
    Fixed area3 = abs(area(point, b, c));
    std::cout << "T: " << (areaT) << std::endl;
    std::cout << "1= " << area1 << std::endl;
    std::cout << "2= " << area2 << std::endl;
    std::cout << "3= " << area3 << std::endl;
    if (area1 == 0 || area2 == 0 || area3 == 0)
        flag = 0;
    std::cout << "rest: " << (area1 + area2 + area3) << std::endl;
    std::cout << "rest: " << areaT - (area1 + area2 + area3) << std::endl;
    if (!flag || areaT - (area1 + area2 + area3) < 0)
    {
        std::cout << "outside" << std::endl;
        return (0);
    }
    std::cout << "inside" << std::endl;
    return (1);
}
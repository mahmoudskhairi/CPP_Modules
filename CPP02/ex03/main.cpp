#include "Point.hpp"

int main(void)
{
    Point a(2, 2);
    // std::cout << "a--->" << a.GetX() << std::endl;
    // std::cout << "a--->" << a.GetY() << std::endl;
    Point b(0, 2);
    // std::cout << "b--->" << b.GetX() << std::endl;
    // std::cout << "b--->" << b.GetY() << std::endl;
    Point c(2, 0);
    // std::cout << "c--->" << c.GetX() << std::endl;
    // std::cout << "c--->" << c.GetY() << std::endl;
    Point s(2, 2.001f);
    bsp(a, b, c, s);
    return 0;
}

#include "Point.hpp"

int main(void)
{
    Point a(2, 0);
    // // std::cout << "a--->" << a.GetX() << std::endl;
    // // std::cout << "a--->" << a.GetY() << std::endl;
    Point b(0, 2);
    // // std::cout << "b--->" << b.GetX() << std::endl;
    // // std::cout << "b--->" << b.GetY() << std::endl;
    Point c(0, 0);
    // // std::cout << "c--->" << c.GetX() << std::endl;
    // // std::cout << "c--->" << c.GetY() << std::endl;
    Point s(-0.5f, -0.5f);
    bsp(a, b, c, s);
    // Fixed s1(1.9999f);
    // std::cout << s1.toFloat() << std::endl;
    return 0;
}

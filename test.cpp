#include <iostream>
#include <iomanip>


int main()
{
    float x = 888.88222f;
    // std::cout << "float: " << x << std::endl;
    // std::cout << "scientific: " << std::scientific << x << std::endl;
    std::cout << "fixed: " << std::setprecision(20) << x << std::endl;
    // std::cout << "fixed: " << std::fixed << x << std::endl;
    // std::cout << "fixed: " << std::fixed << std::setprecision(10) << x << std::endl;
}
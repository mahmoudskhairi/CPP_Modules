#include <iostream>

int main()
{
    float x = 888.88222f;
    std::cout << "float: " << x << std::endl;
    std::cout << "scientific: " << std::scientific << x << std::endl;
    std::cout << "fixed: " << std::fixed << x << std::endl;
}
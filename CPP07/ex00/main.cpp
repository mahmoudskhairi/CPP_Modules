#include "whatever.hpp"

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}
template <typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}
int main()
{
    std::cout << "max: " << max(2, 5) << std::endl;
    std::cout << "min: " << min(2, 5) << std::endl;
    std::cout << "" << std::endl;
}
#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
    // typename T::iterator it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw std::runtime_error("your number dosen't exists in container!");
    return (it);
}
 
int main() {

    try
    {
        std::vector<int> v2;

        v2.push_back(0);
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);
        easyfind(v2, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

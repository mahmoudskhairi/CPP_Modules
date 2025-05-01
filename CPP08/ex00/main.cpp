#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
    /* finding loop /
    typename T::iterator it;
     for (it = container.begin(); it != container.end(); it++)
     {
         if (*it == number)
            break;
    }*/
    typename T::iterator it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw std::runtime_error("your number dosen't exists in the container!");
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
        std::vector<int>::iterator it = easyfind(v2, 0);
        std::cout << "# " << *it << " exists in the container ." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

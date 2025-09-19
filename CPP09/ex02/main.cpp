#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    try
    {
        if (ac < 3)
        {
            throw std::runtime_error("Error: you should enter at least two arguments!");
        }
        PmergeMe h;
        h.setInput(ac, av);
        h.Ford_Johnson();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
#include "bureaucrat.hpp"

int main()
{
        // bureaucrat burecrat("#new_bureauctrat#", 1);
    try
    {
        bureaucrat burecrat("#new_bureauctrat#", 1);
        // std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
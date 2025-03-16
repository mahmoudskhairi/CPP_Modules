#include "bureaucrat.hpp"

int main()
{
    try
    {
        bureaucrat bureaucrat("#new_bureauctrat#", 1);
        std::cout << bureaucrat << std::endl;
    }
    catch (bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }
}
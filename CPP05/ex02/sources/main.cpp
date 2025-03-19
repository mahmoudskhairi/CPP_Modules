#include "includes/AForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"

void Correct()
{
    PresidentialPardonForm pre();
}
// void Wrong()
// {
// }
int main()
{
    try
    {
        Correct();
        // Wrong();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
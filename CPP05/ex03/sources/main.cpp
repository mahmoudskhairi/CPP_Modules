#include "../includes/AForm.hpp"
// #include "includes/PresidentialPardonForm.hpp"
// #include "includes/ShrubberyCreationForm.hpp"
// #include "includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

// void Correct()
// {
//     PresidentialPardonForm pre();
// }
// void Wrong()
// {
// }
int main()
{
    try
    {
        Intern one;
        one.makeForm("ana", "presidential pardonform");
        // Wrong();
    }
    catch (std::exception &e)
    { 
        std::cerr << e.what() << '\n';
    }
}
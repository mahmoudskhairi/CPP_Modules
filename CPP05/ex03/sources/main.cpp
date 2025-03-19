#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

void Correct()
{
    Intern correct;
    Bureaucrat bur_("me", 1);
    AForm *form = correct.makeForm("presidential pardonform", "Target");
    std::cout << "# bureacrat info: " << bur_;
    std::cout << "# form info: " << *form;
    bur_.signForm(*form);
    bur_.executeForm(*form);
}

void Wrong()
{
    Intern wrong;
    Bureaucrat bur_("me", 1);
    AForm *form = wrong.makeForm("presidential_pardonform", "Target");
    std::cout << "# bureacrat info: " << bur_;
    std::cout << "# form info: " << *form;
    bur_.signForm(*form);
    bur_.executeForm(*form);
}
int main()
{
    try
    {
        // Correct();
        Wrong();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
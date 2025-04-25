#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

void Correct()
{
    Intern correct;
    Bureaucrat bur_("bur", 1);
    AForm *form = correct.makeForm("presidential pardon", "Target");
    std::cout << "# bureacrat info:\n- " << bur_ << std::endl;
    std::cout << "# form info:\n- " << *form << std::endl;
    bur_.signForm(*form);
    bur_.executeForm(*form);
    delete form;
}

void Wrong()
{
    Intern wrong;
    Bureaucrat bur_("bur", 1);
    AForm *form = wrong.makeForm("presidential_pardon", "Target");
    std::cout << "# bureacrat info:\n- " << bur_ << std::endl;
    std::cout << "# form info:\n- " << *form << std::endl;
    bur_.signForm(*form);
    bur_.executeForm(*form);
    delete form;
}

// void leaks()
// {
//     system("leaks -q Intern");
// }
int main()
{
    // atexit (leaks);
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
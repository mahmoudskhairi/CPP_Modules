#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

void test1()
{
    std::cout << "\n# ------- test1 -------- #" << std::endl;
    PresidentialPardonForm pre("home");
    Bureaucrat bur_("ana", 1);
    bur_.signForm(pre);
    bur_.executeForm(pre);
    std::cout << pre << std::endl;
}
void test2()
{
    std::cout << "\n# ------- test2 -------- #" << std::endl;
    ShrubberyCreationForm shr("home");
    Bureaucrat bur_("ana", 1);
    bur_.signForm(shr);
    bur_.executeForm(shr);
    std::cout << shr << std::endl;
}
void test3()
{
    std::cout << "\n# ------- test3 -------- #" << std::endl;
    RobotomyRequestForm rob("home");
    Bureaucrat bur_("ana", 1);
    bur_.signForm(rob);
    bur_.executeForm(rob);
    std::cout << rob << std::endl;
}
void wrongtest()
{
    std::cout << "\n# ------- wrongtest -------- #" << std::endl;
    ShrubberyCreationForm shr("home");
    Bureaucrat bur_("ana", 1);
    bur_.signForm(shr);
    bur_.executeForm(shr);
    std::cout << shr << std::endl;
}
int main()
{
    try
    {
        test1();
        test2();
        test3();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
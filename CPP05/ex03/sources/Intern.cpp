#include "../includes/Intern.hpp"
/* canonical form*/
Intern::Intern(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Intern Default Constructor Called!" << std::endl;
}
Intern::Intern(Intern &New)
{
    if (PRINTINGMODE)
        std::cout << "Intern Copy constructor Called!" << std::endl;
    (void)New;
}
Intern &Intern::operator=(const Intern &New)
{
    if (PRINTINGMODE)
        std::cout << "Intern Assignement Operator Called!" << std::endl;
    (void)New;
    return (*this);
}
Intern::~Intern()
{
    if (PRINTINGMODE)
        std::cout << "Intern Destructor Called!" << std::endl;
}
// make AForm functions
AForm *Intern::presidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}
AForm *Intern::robotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}
AForm *Intern::shrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string keywords[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    ptrMethod methods[3] = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};
    if (name.compare("presidential pardon") && name.compare("robotomy request") && name.compare("shrubbery creation"))
        throw InternInvalidInput();
    AForm *ptr = NULL;
    for (int i = 0; i < 3; i++)
    {
        if (!name.compare(keywords[i]))
        {
            std::cout << "=====\n";
            ptr = (this->*methods[i])(target);
            break;
        }
    }
    return (ptr);
}

// InternInvalidInput exception
const char *Intern::InternInvalidInput::what() const throw()
{
    return ("<Intern>: invalid input exception, try again!");
}
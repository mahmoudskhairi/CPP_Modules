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
    std::string keywords[3] = {"presidential pardonform", "robotomy requestform", "shrubbery creation form"};
    ptrMethod methods[3] = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};
    if (name.compare("presidential pardonform") && name.compare("robotomy requestform") && name.compare("shrubbery creation form"))
        throw InternInvalidInput();
    AForm *ptr;
    for (int i = 0; i < 3; i++)
    {
        if (!name.compare(keywords[i]))
        {
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
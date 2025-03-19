#include "../includes/Intern.hpp"


Intern::Intern(/* args */)
{
        if (PRINTINGMODE)
            std::cout << "Intern Default Constructor Called!" << std::endl;
}

PresidentialPardonForm Intern::presidential(std::string target)
{
    return(PresidentialPardonForm(target));
}
RobotomyRequestForm Intern::robotomy(std::string target)
{
    return(RobotomyRequestForm(target));
}
ShrubberyCreationForm Intern::shrubbery(std::string target)
{
    return(ShrubberyCreationForm(target));   
}
AForm &Intern::makeForm(std::string name, std::string target)
{
    std::string keywords[3] = {"presidential pardonform", "robotomy requestform", "shrubbery creation form"};
    ptrMethod methods[3] = {&Intern::presidential, &Intern::robotomy, &Intern::shrubbery};
    if (name.compare("presidential pardonform") && name.compare("robotomy requestform") && name.compare("shrubbery creation form"))
        std::cerr << "Invalid Target!" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (!target.compare(keywords[i]))
        {
            (this->*methods[i])(target);
            break;
        }
    }
}

Intern::~Intern()
{
        if (PRINTINGMODE)
            std::cout << "Intern Destructor Called!" << std::endl;
}
#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */) : AForm("PresidentialPardonForm", 25, 5), _Target("")
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Default constructor called!" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _Target(target)
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Parameterized constructor called!" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &New)
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Copy constructor called!" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &New)
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Assignementoperator called!" << std::endl;
}
void PresidentialPardonForm::ExecuteAction() const
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
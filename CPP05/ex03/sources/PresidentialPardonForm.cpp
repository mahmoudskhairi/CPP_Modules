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
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &New) : AForm(New.GetName(), New.GetSignGrade(), New.GetExecuteGrade())
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Copy constructor called!" << std::endl;
    this->SetSignature(New.GetIsSigned());
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &New)
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Assignementoperator called!" << std::endl;
    if (this != &New)
        this->SetSignature(New.GetIsSigned());
    return (*this);
}
void PresidentialPardonForm::ExecuteAction() const
{
    std::cout << this->_Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    if (PRINTINGMODE)
        std::cout << "PresidentialPardonForm Destructor called!" << std::endl;
}

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */) : AForm("RobotomyRequestForm", 72, 45), _Target("")
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _Target(target)
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Parameterized constructor called!" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &New) : AForm(New.GetName(), New.GetSignGrade(), New.GetExecuteGrade())
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Copy constructor called!" << std::endl;
    this->SetSignature(New.GetIsSigned());
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &New)
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Assignement operator called!" << std::endl;
    if (this != &New)
        this->SetSignature(New.GetIsSigned());
    return (*this);
}
void RobotomyRequestForm::ExecuteAction() const
{
    static size_t i;
    if (i % 2)
        std::cout << _Target << "has been robotomized successfully 50%% of the time" << std::endl;
    else
        std::cout << "the robotomy failed." << std::endl;
    i++;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Destructor called!" << std::endl;
}
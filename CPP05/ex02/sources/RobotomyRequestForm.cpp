#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */) : AForm("RobotomyRequestForm", 25, 5), _Target("")
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 25, 5), _Target(Target)
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Parameterized constructor called!" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &New)
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Copy constructor called!" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &New)
{
    if (PRINTINGMODE)
        std::cout << "RobotomyRequestForm Assignementoperator called!" << std::endl;
}
void RobotomyRequestForm::ExecuteAction() const
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
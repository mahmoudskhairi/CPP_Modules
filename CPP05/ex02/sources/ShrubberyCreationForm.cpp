#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : AForm("PresidentialPardonForm", 25, 5), _Target("")
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Parameterized constructor called!" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &New)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Copy constructor called!" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &New)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Assignementoperator called!" << std::endl;
}
void ShrubberyCreationForm::ExecuteAction() const
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
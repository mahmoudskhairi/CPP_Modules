#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : AForm("ShrubberyCreationForm", 145, 137), _Target("unknown")
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _Target(target)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Parameterized constructor called!" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &New) : AForm(New.GetName(), New.GetSignGrade(), New.GetExecuteGrade()),  _Target(New._Target)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Copy constructor called!" << std::endl;
    this->SetSignature(New.GetIsSigned());
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &New)
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Assignementoperator called!" << std::endl;
    if (this != &New)
    {
        this->_Target = New._Target;
        this->SetSignature(New.GetIsSigned());
    }
    return (*this);
}
void ShrubberyCreationForm::ExecuteAction() const
{
    std::ofstream output(_Target + "_shrubbery");
    output << "                ,@@@@@@@,\n"
              "        ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
              "        ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
              "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
              "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
              "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
              "    `&%\\ ` /%&'    |.|        \\ '|8'\n"
              "        |o|        | |         | |\n"
              "        |.|        | |         | |\n"
              "    jgs \\/ ._\\//_/__/  ,\\_//__\\/.  /\\_//__/_"
           << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    if (PRINTINGMODE)
        std::cout << "ShrubberyCreationForm Destructor called!" << std::endl;
}
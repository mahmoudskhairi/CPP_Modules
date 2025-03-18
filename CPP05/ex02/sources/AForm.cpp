#include "../includes/AForm.hpp"

/* Canonical methods */
AForm::AForm(/* args */) : _Name(""), _SignGrade(1), _ExecuteGrade(1), _IsSigned(false)
{
    if (PRINTINGMODE)
        std::cout << "Form Default constructor called!" << std::endl;
}
AForm::AForm(const std::string Name, int SignGrade, int ExecuteGrade) : _Name(Name), _SignGrade(SignGrade), _ExecuteGrade(ExecuteGrade), _IsSigned(false)
{
    if (PRINTINGMODE)
        std::cout << "Form Parameterized constructor called!" << std::endl;
}
AForm::AForm(AForm &New) : _Name(New._Name), _SignGrade(New._SignGrade), _ExecuteGrade(New._ExecuteGrade), _IsSigned(New._IsSigned)
{
    if (PRINTINGMODE)
        std::cout << "Form Copy constructor called!" << std::endl;
}
AForm &AForm::operator=(AForm &New)
{
    if (PRINTINGMODE)
        std::cout << "Form Copy Assignment operator called!" << std::endl;
    if (this != &New)
    {
        this->_SignGrade = New._SignGrade;
        this->_ExecuteGrade = New._ExecuteGrade;
        this->_IsSigned = New._IsSigned;
    }
    return *this;
}
AForm::~AForm()
{
    if (PRINTINGMODE)
        std::cout << "Form Destructor called!" << std::endl;
}
/* getters */
const std::string AForm::GetName() const { return this->_Name; }
bool AForm::GetIsSigned() const { return this->_IsSigned; }
int AForm::GetSignGrade() const { return this->_SignGrade; }
int AForm::GetExecuteGrade() const { return this->_ExecuteGrade; }

/*AForm member functions*/
void AForm::beSigned(Bureaucrat &bur_)
{
    if (bur_.GetGrade() <= this->GetSignGrade())
        this->_IsSigned = true;
    else
        throw GradeTooLowException();
}
/* overridding of what of base exception class */
const char *AForm::GradeTooHighException::what() const throw() { return ("* Too High <AForm> grade Exception!"); }
const char *AForm::GradeTooLowException::what() const throw() { return ("* Too Low <AForm> grade Exception!"); }

/*insertion operator*/
std::ostream &operator<<(std::ostream &output, AForm &AForm)
{
    return output << AForm.GetName() << "'s Sign_Grade is: " << AForm.GetSignGrade() << " , And his Execute_Grade is: " << AForm.GetExecuteGrade() << " , Signed status is: " << AForm.GetIsSigned() << std::endl;
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (executor.GetGrade() <= this->GetExecuteGrade())
        this->ExecuteAction();
    else
        AForm::GradeTooLowException();
}
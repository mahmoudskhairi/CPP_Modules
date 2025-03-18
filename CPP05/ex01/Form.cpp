#include "Form.hpp"

/* Canonical methods */
Form::Form(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Form Default constructor called!" << std::endl;
}
Form::Form(const std::string Name, int SignGrade, int ExecuteGrade) : _Name(Name), _SignGrade(SignGrade), _ExecuteGrade(ExecuteGrade), _IsSigned(false)
{
    if (PRINTINGMODE)
        std::cout << "Form Parameterized constructor called!" << std::endl;
}
Form::Form(Form &New) : _Name(New._Name), _SignGrade(New._SignGrade), _ExecuteGrade(New._ExecuteGrade), _IsSigned(New._IsSigned)
{
    if (PRINTINGMODE)
        std::cout << "Form Copy constructor called!" << std::endl;
}
Form &Form::operator=(Form &New)
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
Form::~Form()
{
    if (PRINTINGMODE)
        std::cout << "Form Destructor called!" << std::endl;
}
/* getters */
const std::string Form::GetName() const { return this->_Name; }
bool Form::GetIsSigned() const { return this->_IsSigned; }
int Form::GetSignGrade() const { return this->_SignGrade; }
int Form::GetExecuteGrade() const { return this->_ExecuteGrade; }

/*form member functions*/
void Form::beSigned(Bureaucrat &bur_)
{
    if (bur_.GetGrade() <= this->GetSignGrade())
        this->_IsSigned = true;
    else
        throw GradeTooLowException();
}
/* overridding of what of base exception class */
const char *Form::GradeTooHighException::what() const throw() { return ("* Too High <Form> grade Exception!"); }
const char *Form::GradeTooLowException::what() const throw() { return ("* Too Low <Form> grade Exception!"); }

/*insertion operator*/
std::ostream &operator<<(std::ostream &output, Form &form)
{
    return output << form.GetName() << "'s Sign_Grade is: " << form.GetSignGrade() << " , And his Execute_Grade is: " << form.GetExecuteGrade() << " , Signed status is: " << form.GetIsSigned() << std::endl;
}
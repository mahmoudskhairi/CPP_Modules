#include "Bureaucrat.hpp"

/*canonical member functions*/
Bureaucrat::Bureaucrat(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Bureaucrat Constructor Called!" << std::endl;
}
Bureaucrat::Bureaucrat(std::string const name, const int grade) : _Name(name), _Grade(grade)
{
    if (PRINTINGMODE)
        std::cout << "Bureaucrat Parameterized Constructor Called!" << std::endl;
    if (this->_Grade > 150)
        throw GradeTooLowException();
    else if (this->_Grade < 1)
        throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(Bureaucrat &another) : _Name(another._Name), _Grade(another._Grade)
{
    if (PRINTINGMODE)
        std::cout << "Bureaucrat Copy Constructor Called!" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat &another)
{
    if (PRINTINGMODE)
        std::cout << "Bureaucrat Copy Assignment Operator Called!" << std::endl;
    if (this != &another)
        this->_Grade = another._Grade;
    return (*this);
}
/* increment and decrement member functions */
void Bureaucrat::increment()
{
    if (this->_Grade > 1)
        this->_Grade--;
    else
        throw GradeTooHighException();
}
void Bureaucrat::decrement()
{
    if (this->_Grade < 150)
        this->_Grade++;
    else
        throw GradeTooLowException();
}
/* getters */
std::string Bureaucrat::GetName() const { return this->_Name; }
int Bureaucrat::GetGrade() const { return this->_Grade; }
Bureaucrat::~Bureaucrat()
{
    if (PRINTINGMODE)
        std::cout << "Bureaucrat Destructor Called!" << std::endl;
}

/* overridding of what of base exception class */
const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("* Too High <Bureaucrat> grade Exception!"); }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return ("* Too Low <Bureaucrat> grade Exception!"); }

/*insertion operator*/
std::ostream &operator<<(std::ostream &output, Bureaucrat &bur_)
{
    return output << bur_.GetName() << " Bureaucrat grade " << bur_.GetGrade() << "." << std::endl;
}

/*signe form*/
void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->GetName() << " signed " << form.GetName() << std::endl;
    }
    catch (...)
    {
        std::cout << this->GetName() << " couldn’t sign " << form.GetName() << " because his grade is not enough" << std::endl;
        throw;
    }
}
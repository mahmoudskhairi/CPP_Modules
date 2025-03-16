#include "bureaucrat.hpp"

bureaucrat::bureaucrat(/* args */) : _Name("unknown:name"), _Grade(1)
{
    if (PRINTINGMODE)
        std::cout << "Constructor Called!" << std::endl;
    if (this->_Grade > 150)
        throw GradeTooLowException();
    else if (this->_Grade < 1)
        throw GradeTooHighException();
}
bureaucrat::bureaucrat(std::string const name, const int grade) : _Name(name), _Grade(grade)
{
    if (PRINTINGMODE)
        std::cout << "Parameterized Constructor Called!" << std::endl;
    if (this->_Grade > 150)
        throw GradeTooLowException();
    else if (this->_Grade < 1)
        throw GradeTooHighException();
}
bureaucrat::bureaucrat(bureaucrat &another) : _Name(another._Name), _Grade(another._Grade)
{
    if (PRINTINGMODE)
        std::cout << "Copy Constructor Called!" << std::endl;
}
bureaucrat &bureaucrat::operator=(bureaucrat &another)
{
    if (PRINTINGMODE)
        std::cout << "Copy Assignment Operator Called!" << std::endl;
    if (this != &another)
        this->_Grade = another._Grade;
    return (*this);
}
void bureaucrat::increment()
{
    if (this->_Grade > 1)
        this->_Grade--;
    else
        throw GradeTooHighException();
}
void bureaucrat::decrement()
{
    if (this->_Grade < 150)
        this->_Grade++;
    else
        throw GradeTooLowException();
}

std::string bureaucrat::GetName() { return this->_Name; }
int bureaucrat::GetGrade() { return this->_Grade; }
bureaucrat::~bureaucrat()
{
    if (PRINTINGMODE)
        std::cout << "Destructor Called!" << std::endl;
}
const char *bureaucrat::GradeTooHighException::what() const throw() { return ("* Too High grade Exception!"); }
const char *bureaucrat::GradeTooLowException::what() const throw() { return ("* Too Low grade Exception!"); }

std::ostream &operator<<(std::ostream &output, bureaucrat &bur_)
{
   return     output << bur_.GetName() << " bureaucrat grade " << bur_.GetGrade() << "." << std::endl; 
}
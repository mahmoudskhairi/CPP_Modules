#include "Bureaucrat.hpp"

/*canonical member functions*/
bureaucrat::bureaucrat(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Constructor Called!" << std::endl;
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
/*increment and decrement member functions*/
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
/* getters */
std::string bureaucrat::GetName() const { return this->_Name; }
int bureaucrat::GetGrade() const { return this->_Grade; }
bureaucrat::~bureaucrat()
{
    if (PRINTINGMODE)
        std::cout << "Destructor Called!" << std::endl;
}

/* overridding of what of base exception class */
const char *bureaucrat::GradeTooHighException::what() const throw() { return ("* Too High grade Exception!"); }
const char *bureaucrat::GradeTooLowException::what() const throw() { return ("* Too Low grade Exception!"); }

/*insertion operator*/
std::ostream &operator<<(std::ostream &output, bureaucrat &bur_)
{
    return output << bur_.GetName() << " bureaucrat grade " << bur_.GetGrade() << "." << std::endl;
}
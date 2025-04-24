#include "Bureaucrat.hpp"

/*canonical member functions*/
Bureaucrat::Bureaucrat(/* args */): _Name("unknown"), _Grade(1)
{
    if (PRINTINGMODE)
        std::cout << "Constructor Called!" << std::endl;
    if (this->_Grade > 150)
        throw a();
    else if (this->_Grade < 1)
        throw a();
}
Bureaucrat::Bureaucrat(std::string const name, const int grade) : _Name(name), _Grade(grade)
{
    if (PRINTINGMODE)
        std::cout << "Parameterized Constructor Called!" << std::endl;
    if (this->_Grade > 150)
        throw a();
    else if (this->_Grade < 1)
        throw a();
}
Bureaucrat::Bureaucrat(Bureaucrat &another) : _Name(another._Name), _Grade(another._Grade)
{
    if (PRINTINGMODE)
        std::cout << "Copy Constructor Called!" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat &another)
{
    if (PRINTINGMODE)
        std::cout << "Copy Assignment Operator Called!" << std::endl;
    if (this != &another)
        this->_Grade = another._Grade;
    return (*this);
}
/*increment and decrement member functions*/
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
        std::cout << "Destructor Called!" << std::endl;
}

/* overridding of what of base exception class */
const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("* Too High grade Exception!"); }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return ("* Too Low grade Exception!"); }

/*insertion operator*/
std::ostream &operator<<(std::ostream &output, Bureaucrat &bur_)
{
    return output << bur_.GetName() << " Bureaucrat grade " << bur_.GetGrade() << "." << std::endl;
}
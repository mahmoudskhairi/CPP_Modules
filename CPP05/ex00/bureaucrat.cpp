#include "bureaucrat.hpp"

bureaucrat ::bureaucrat(/* args */) : _name("unknown_name")
{
    std::cout << "# constructor" << std::endl;
}
bureaucrat ::bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "# parameterized constructor" << std::endl;
}
bureaucrat ::~bureaucrat()
{
    std::cout << "# destructor" << std::endl;
}
int bureaucrat ::getGrade()
{
    return this->_grade;
}
void bureaucrat ::setGrade(int grade)
{
    this->_grade = grade;
}
std::string bureaucrat ::getName()
{
    return (this->_name);
}
void bureaucrat ::setname(std::string name)
{
    this->_name = name;
}

void bureaucrat::increment()
{
    this->_grade > 1 ? this->_grade-- : throw bureaucrat::GradeTooHighException();
    // if (this->_grade > 1)
    //     this->_grade--;
    // else
    //     throw bureaucrat::GradeTooHighException();
}
void bureaucrat::decrement()
{
    this->_grade < 150 ? this->_grade++ : throw bureaucrat::GradeTooLowException();
    // if (this->_grade < 150)
    //     this->_grade++;
    // else
    //     throw bureaucrat::GradeTooLowException();
}
const char *bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}
const char *bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

std::ostream &operator<<(std::ostream &output, bureaucrat &br)
{
    output << "* " << br.getName() << "'s grade is : " << br.getGrade();
    return output;
}
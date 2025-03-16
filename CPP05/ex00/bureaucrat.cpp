#include "bureaucrat.hpp"

bureaucrat::bureaucrat(/* args */) : _Name("unknown:name"), _Grade(1)
{
}
bureaucrat::bureaucrat(std::string const name, const int grade) : _Name(name), _Grade(grade)
{
}
bureaucrat::bureaucrat(bureaucrat &another)
{
}
bureaucrat &bureaucrat::operator=(bureaucrat &another)
{
}
void bureaucrat::increment()
{
}
void bureaucrat::decrement()
{
}
bureaucrat::~bureaucrat()
{
}
const char *bureaucrat::GradeTooHighException::what() const throw() { return ("Too High grade Exception"); }
const char *bureaucrat::GradeTooLowException::what() const throw() { return ("Too Low grade Exception"); }
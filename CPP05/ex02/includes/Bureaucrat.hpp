
#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_
#include <iostream>
#include <exception>
#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
    std::string _Name;
    int _Grade;
    Bureaucrat(/* args */);

public:
    Bureaucrat(std::string const name, const int grade);
    Bureaucrat(Bureaucrat &another);
    Bureaucrat &operator=(Bureaucrat &another);
    void increment();
    void decrement();
    void signForm(AForm &form);
    int GetGrade() const;
    std::string GetName() const;
    ~Bureaucrat();
    /*custom exception classes*/
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    //
    void executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &bur_);

#endif
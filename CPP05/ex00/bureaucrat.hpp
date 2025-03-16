#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <iostream>
#include <stdexcept>

#ifndef PRINTINGMODE 1
#define PRINTINGMODE
#endif

class bureaucrat
{
private:
    const int _Grade;
    const std::string _Name;

public:
    bureaucrat(/* args */);
    bureaucrat(std::string const name, const int grade);
    bureaucrat(bureaucrat &another);
    bureaucrat &operator=(bureaucrat &another);
    void increment();
    void decrement();
    ~bureaucrat();
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};

#endif
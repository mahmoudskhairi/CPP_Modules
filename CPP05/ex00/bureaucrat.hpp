#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_
#include <iostream>
// #include <stdexcept>
#include <exception>

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

class bureaucrat
{
private:
    std::string _Name;
    int _Grade;
    bureaucrat(/* args */);

public:
    bureaucrat(std::string const name, const int grade);
    bureaucrat(bureaucrat &another);
    bureaucrat &operator=(bureaucrat &another);
    void increment();
    void decrement();
    int GetGrade() const;
    std::string GetName() const;
    ~bureaucrat();
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
};

std::ostream &operator<<(std::ostream &output, bureaucrat &bur_);

#endif
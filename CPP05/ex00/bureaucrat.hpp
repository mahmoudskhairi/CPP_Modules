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

public:
    bureaucrat(/* args */);
    bureaucrat(std::string const name, const int grade);
    bureaucrat(bureaucrat &another);
    bureaucrat &operator=(bureaucrat &another);
    void increment();
    void decrement();
    int GetGrade();
    std::string GetName();
    ~bureaucrat();
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
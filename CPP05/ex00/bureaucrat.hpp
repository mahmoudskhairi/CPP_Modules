#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <iostream>
#include <stdexcept>

class bureaucrat
{
private:
    /* data */
    std::string _name;
    int _grade;
    bureaucrat(/* args */);

public:
    bureaucrat(std::string name, int grade);
    int getGrade();
    void setGrade(int grade); //
    std::string getName();
    void setname(std::string name); //
    ~bureaucrat();
    void increment();
    void decrement();

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

std::ostream &operator<<(std::ostream &output, bureaucrat &br);

#endif
#ifndef _AFORM_HPP_
#define _AFORM_HPP_
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
private:
    /* data */
    const std::string _Name;
    int _SignGrade;
    int _ExecuteGrade;
    bool _IsSigned;
    AForm(/* args */);

public:
    AForm(const std::string Name, int SignGrade, int ExecuteGrade);
    AForm(AForm &New);
    AForm &operator=(AForm &New);
    ~AForm();
    /* getters */
    const std::string GetName() const;
    bool GetIsSigned() const;
    int GetSignGrade() const;
    int GetExecuteGrade() const;
    /*AForm member functions*/
    void beSigned(Bureaucrat &bur_);
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
    // pure member function
    void execute(Bureaucrat const &executor) const;
    virtual void ExecuteAction() const = 0;
};

std::ostream &operator<<(std::ostream &output, AForm &form);
#endif
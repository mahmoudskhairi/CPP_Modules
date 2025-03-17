#ifndef _FORM_HPP_
#define _FORM_HPP_
#include "bureaucrat.hpp"
class bureaucrat;
class Form
{
private:
    /* data */
    const std::string _Name;
    int _SignGrade;
    int _ExecuteGrade;
    bool _IsSigned;
    Form(/* args */);

public:
    Form(const std::string Name, int SignGrade, int ExecuteGrade);
    Form(Form &New);
    Form &operator=(Form &New);
    ~Form();
    /* getters */
    const std::string GetName() const;
    bool GetIsSigned() const;
    int GetSignGrade() const;
    int GetExecuteGrade() const;
    /*form member functions*/
    void beSigned(bureaucrat &bur_);
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

std::ostream &operator<<(std::ostream &output, Form &form);
#endif
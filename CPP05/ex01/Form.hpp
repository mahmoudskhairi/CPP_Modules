#ifndef _FORM_HPP_
#define _FORM_HPP_
#include "bureaucrat.hpp"

class Form
{
private:
    /* data */
    const std::string _Name;
    bool _IsSigned;
    int _SignGrade;
    int _ExecuteGrade;

public:
    Form(/* args */);
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
    void beSigned();
};

Form::Form(/* args */)
{
}

Form::~Form()
{
}

#endif
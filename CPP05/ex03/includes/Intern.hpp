#ifndef _INTERN_HPP_
#define _INTERN_HPP_
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// class AForm;
class Intern
{
private:
public:
    Intern(/* args */);
    PresidentialPardonForm presidential(std::string target);
    RobotomyRequestForm robotomy(std::string target);
    ShrubberyCreationForm shrubbery(std::string target);
    AForm &makeForm(std::string name, std::string target);
    ~Intern();

};

typedef void (AForm::*ptrMethod)(std::string target);


#endif
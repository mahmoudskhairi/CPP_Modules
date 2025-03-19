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
    // canonical
    Intern(/* args */);
    Intern(Intern &New);
    Intern &operator=(const Intern &New);
    ~Intern();
    // make AForms
    AForm *presidential(std::string target);
    AForm *robotomy(std::string target);
    AForm *shrubbery(std::string target);
    AForm *makeForm(std::string name, std::string target);
    // InternInvalidInput exception
    class InternInvalidInput : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

typedef AForm *(Intern::*ptrMethod)(std::string);

#endif
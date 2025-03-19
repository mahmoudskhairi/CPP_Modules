#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

// #include "Bureaucrat.hpp"
#include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
private:
    const std::string _Target;
    PresidentialPardonForm(/* args */);

public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm &New);
    PresidentialPardonForm &operator=(PresidentialPardonForm &New);
    ~PresidentialPardonForm();
    void ExecuteAction() const;
};

#endif
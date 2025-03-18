#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string _Target;

public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &New);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &New);
    ~ShrubberyCreationForm();
    void ExecuteAction() const;
};

#endif
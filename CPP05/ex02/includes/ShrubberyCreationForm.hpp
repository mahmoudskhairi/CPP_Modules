#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string _Target;
    ShrubberyCreationForm(/* args */);

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &New);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &New);
    ~ShrubberyCreationForm();
    void ExecuteAction() const;
};

#endif
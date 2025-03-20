#ifndef _ROBOTMYREQUESTFORM_HPP_
#define _ROBOTMYREQUESTFORM_HPP_

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string _Target;
    RobotomyRequestForm(/* args */);

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &New);
    RobotomyRequestForm &operator=(RobotomyRequestForm &New);
    ~RobotomyRequestForm();
    void ExecuteAction() const;
};

#endif
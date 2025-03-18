#ifndef _ROBOTMYREQUESTFORM_HPP_
#define _ROBOTMYREQUESTFORM_HPP_

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    const std::string _Target;

public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm &New);
    RobotomyRequestForm &operator=(RobotomyRequestForm &New);
    ~RobotomyRequestForm();
    void ExecuteAction() const;
};

#endif
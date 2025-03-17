#include "Form.hpp"

/* getters */
const std::string Form::GetName() const { return this->_Name; }
bool Form::GetIsSigned() const { return this->_IsSigned; }
int Form::GetSignGrade() const { return this->_SignGrade; }
int Form::GetExecuteGrade() const { return this->_ExecuteGrade; }
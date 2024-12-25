#include "Contact.hpp"

void Contact::SetContact()
{
	this->_FirstName = this->SetField("FirstName: ");
	this->_LastName = this->SetField("LastName: ");
	this->_NeackName = this->SetField("NeackName: ");
	this->_PhoneNumber = this->SetField("PhoneNumber: ");
	this->_DarkestSecret = this->SetField("DarkestSecret: ");
}

std::string Contact::SetField(std::string str)
{
	std::string FieldValue = "";
	bool TryAgain;
	do
	{
		TryAgain = true;
		std::cout << str;
		std::getline(std::cin, FieldValue);
		if (FieldValue.empty())
		{
			std::cout << "No Input Try Again!" << std::endl;
			TryAgain = false;
		}
	} while (!TryAgain);
	return (FieldValue);
}
// std::string Contact::GetField(std::string str)
// {
// 	if (!str.compare("FirstName"))
// 		return (this->_FirstName);
// 	else if (!str.compare("LastName"))
// 		return (this->_LastName);
// 	return (this->_NeackName);
// }

std::string Contact::RespectLength(std::string str)
{
	if (str.length() >= 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return (str);
}
void Contact::GetContact()
{
	std::cout << "|" << std::setw(10) << this->RespectLength(this->_FirstName);
	std::cout << "|" << std::setw(10) << this->RespectLength(this->_LastName);
	std::cout << "|" << std::setw(10) << this->RespectLength(this->_NeackName) + "|" << std::endl;
}
void Contact::DisplayContact(int Index)
{
	std::cout << "Contact [" << Index << "]" << std::endl;
	std::cout << "First Name: " << this->_FirstName << std::endl;
	std::cout << "Last Name: " << this->_LastName << std::endl;
	std::cout << "Neack Name: " << this->_NeackName << std::endl;
}

bool Contact::GetIsEmpty()
{
	return (this->_IsEmpty);
}
void Contact::SetIsEmpty()
{
	this->_IsEmpty = false;
}
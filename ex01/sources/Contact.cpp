#include "../headers/Contact.hpp"
#include <unistd.h>

void Contact::SetContact()
{
	this->_FirstName = this->SetField("FirstName: ");
	this->_LastName = this->SetField("LastName: ");
	this->_NickName = this->SetField("NickName: ");
	this->_PhoneNumber = this->SetField("PhoneNumber: ");
	this->_DarkestSecret = this->SetField("DarkestSecret: ");
}

void Contact::trim(std::string &str)
{
	size_t start = 0;
	size_t end = str.length();

	while (start < end && std::isspace(str[start]))
		start++;
	while (start < end && std::isspace(str[end]))
		end--;
	str = str.substr(start, end - start);
}

std::string Contact::SetField(std::string str)
{
	std::string FieldValue = "";
	std::string &RefStr = FieldValue;

	bool TryAgain;
	do
	{
		TryAgain = true;
		std::cout << "❓ " << str;
		std::getline(std::cin, FieldValue);
		this->trim(RefStr);
		if (FieldValue.empty())
		{
			std::cout << "❌ No Input Try Again!" << std::endl;
			TryAgain = false;
		}
	} while (!TryAgain);
	return (FieldValue);
}

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
	std::cout << "|" << std::setw(10) << this->RespectLength(this->_NickName) + "|" << std::endl;
}
void Contact::DisplayContact(int Index)
{
	std::cout << "\n🔢 Contact [" << Index << "]" << std::endl;
	std::cout << "✅ First Name: " << this->_FirstName << std::endl;
	std::cout << "✅ Last Name: " << this->_LastName << std::endl;
	std::cout << "✅ Nick Name: " << this->_NickName << std::endl;
	std::cout << "✅ Phone Number: " << this->_PhoneNumber << std::endl;
	std::cout << "✅ Darkest Secret: " << this->_DarkestSecret << std::endl;
}

bool Contact::GetIsEmpty()
{
	return (this->_IsEmpty);
}
void Contact::SetIsEmpty()
{
	this->_IsEmpty = false;
}
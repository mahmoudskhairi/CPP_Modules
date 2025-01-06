#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _PhoneNumber;
	std::string _DarkestSecret;
	bool _IsEmpty;

public:
	Contact()
	{
		_IsEmpty = true;
	}
	void SetIsEmpty();
	bool GetIsEmpty();
	void SetContact();
	void DisplayContact(int Index);
	void GetContact();
	std::string RespectLength(std::string str);
	std::string SetField(std::string str);
	void trim(std::string &str);
};

#endif
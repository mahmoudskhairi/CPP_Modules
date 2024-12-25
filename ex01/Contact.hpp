#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <limits>
class Contact
{
private:
	std::string _FirstName;
	std::string _LastName;
	std::string _NeackName;
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
	// std::string GetField(std::string str);
	void GetContact();
	std::string SetField(std::string str);
};

#endif
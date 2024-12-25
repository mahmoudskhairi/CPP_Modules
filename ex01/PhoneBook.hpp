#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	Contact MyContact[8];
	void DisplayPhoneBook();
	void GetChoosedContact();
};

#endif
#include "PhoneBook.hpp"

int main()
{
	PhoneBook MyPhoneBook;
	int i = 0;
	while (1)
	{
		std::string input;
		std::cout << "Your PhoneBook> "; // << std::flush
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			MyPhoneBook.MyContact[i].SetContact();
			MyPhoneBook.MyContact[i].SetIsEmpty();
			i++;
		}
		else if (!input.compare("EXIT"))
			break;
		else if (!input.compare("SEARCH"))
		{
			MyPhoneBook.DisplayPhoneBook();
			MyPhoneBook.GetChoosedContact();
		}
		if (i == 8)
			i = 0;
	}
}
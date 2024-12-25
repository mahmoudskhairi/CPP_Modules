#include "PhoneBook.hpp"

void PhoneBook::DisplayPhoneBook()
{
	// std::cout << "|   index   |   first name   |   last name   |   neack name   |";
	std::cout << "|--------------------- PhoneBook -------------------|\n";
	int i = 0;
	while (!MyContact[i].GetIsEmpty())
	{
		std::cout << "  " << i << "  |";
		MyContact[i].GetContact();
		i++;
		if (i == 8)
			break;
	}
}

void PhoneBook::GetChoosedContact()
{
	int Index;
	bool TryAgain;
	do
	{
		TryAgain = false;
		std::cout << "Please enter your contact index: ";
		std::cin >> Index;
		std::cin.ignore();
		if (MyContact[0].GetIsEmpty())
		{
			std::cout << "Please , Use ADD Command To Fill Contacts!\n";
			return;
		}
		if (Index >= 0 && Index <= 7)
		{
			if (MyContact[Index].GetIsEmpty())
			{
				std::cout << "Please , Use Another Index Or ADD Command To Fill More Contacts!\n";
				TryAgain = true;
			}
			else
				MyContact[Index].DisplayContact(Index);
		}
		else
		{
			std::cout << "Invalid Input ,You Might Enter Just Numbers (From 0 To 7)!\n";
			TryAgain = true;
		}
	} while (TryAgain);
}
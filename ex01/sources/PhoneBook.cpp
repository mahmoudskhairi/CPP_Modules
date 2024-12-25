#include "../headers/PhoneBook.hpp"

void PhoneBook::SayHello()
{
	std::cout << "\n	    👋Hello dear client👋\n"
			  << std::endl;
	std::cout << "----------------------------------------------\n"
			  << std::endl;
	std::cout << "   ☎️  Tell Use commands Bellow:" << std::endl;
	std::cout << "	#ADD : save a new contact" << std::endl;
	std::cout << "	#SEARCH : display a specific contact" << std::endl;
	std::cout << "	#EXIT : The program quits" << std::endl;
	std::cout << "----------------------------------------------\n"
			  << std::endl;
}

void PhoneBook::DisplayPhoneBook()
{
	// std::cout << "|   index   |   first name   |   last name   |   neack name   |";
	std::cout << "|🟰🟰🟰🟰🟰🟰🟰🟰 ☎️	PhoneBook	☎️  🟰🟰🟰🟰🟰🟰🟰🟰|"
			  << std::endl;
	int i = 0;
	while (!MyContact[i].GetIsEmpty())
	{
		std::cout << "|" << std::setw(10) << i;
		MyContact[i].GetContact();
		i++;
		if (i == 8)
			break;
	}
}

void PhoneBook::GetChoosedContact()
{
	std::string Input;
	int Index;
	bool TryAgain;
	do
	{
		TryAgain = false;
		std::cout << "🔢 Please enter your contact index: ";
		std::getline(std::cin, Input);
		// std::cin.ignore();
		if (Input.length() != 1 && isdigit(Input[0]))
		{
			std::cout << "❌ Invalid Input ,You Might Enter Just Numbers (From 0 To 7)!\n";
			return;
		}
		Index = Input[0] - '0';
		if (MyContact[0].GetIsEmpty()) // std::cin.good() ||
		{
			std::cout << "❌ Please , Use ADD Command To Fill Contacts!\n";
			return;
		}
		if (Index >= 0 && Index <= 7) // std::cin.good()
		{
			if (MyContact[Index].GetIsEmpty())
			{
				std::cout << "❌ Please , Use ADD Command To Fill More Contacts!\n";
				return;
			}
			MyContact[Index].DisplayContact(Index);
		}
		else
		{
			std::cout << "❌ Invalid Input ,You Might Enter Just Numbers (From 0 To 7)!\n";
			TryAgain = true;
		}
	} while (TryAgain);
}
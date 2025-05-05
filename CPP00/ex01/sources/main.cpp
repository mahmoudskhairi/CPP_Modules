/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:25:42 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:25:45 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PhoneBook.hpp"
int main()
{
	PhoneBook MyPhoneBook;
	int i = 0;
	MyPhoneBook.SayHello();
	while (1)
	{
		std::string input;
		std::cout << "Your PhoneBook> " << std::flush;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << std::endl;
			MyPhoneBook.MyContact[i].SetContact();
			MyPhoneBook.MyContact[i].SetIsEmpty();
			i++;
		}
		else if (!input.compare("EXIT"))
			break;
		else if (!input.compare("SEARCH"))
		{
			std::cout << std::endl;
			MyPhoneBook.DisplayPhoneBook();
			std::cout << std::endl;
			MyPhoneBook.GetChoosedContact();
		}
		if (i == 8)
			i = 0;
	}
}
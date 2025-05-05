/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:25:56 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:26:00 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
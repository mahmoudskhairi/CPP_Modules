/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:22 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:27:24 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    // printing of addresses
    std::cout << "memory address of #string: [" << &str << "]" << std::endl;
    std::cout << "memory address held by #stringPTR: [" << stringPTR << "]" << std::endl;
    std::cout << "memory address held by #stringREF: [" << &stringREF << "]" << std::endl;
    // printing of values
    std::cout << "the value of the string #variable: [" << str << "]" << std::endl;
    std::cout << "the value of the string pointed by #stringPTR: [" << *stringPTR << "]" << std::endl;
    std::cout << "the value of the string referred by #stringREF: [" << stringREF << "]" << std::endl;
}
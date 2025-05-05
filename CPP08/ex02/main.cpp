/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:51:53 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 17:01:23 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
int main()
{
    MutantStack<int> mstack;
    mstack.push(0);
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.pop();
    // std::cout << "top: " << mstack.top() << std::endl;
    // std::cout << "size: " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for(;it != ite;it++)    
        std::cout << "*it: " << *it << std::endl;
    return 0; 
}

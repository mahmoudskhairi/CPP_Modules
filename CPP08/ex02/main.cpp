/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:51:53 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/04 00:02:24 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    Mutantstack<int> one;

    one.push(1337);
    one.push(-12);
    one.push(0);
    one.push(10);
    // std::deque<int>::iterator it = one.begin();
    // std::cout << "num :" << *it << std::endl;
}
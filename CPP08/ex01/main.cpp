/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:52:27 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/22 16:27:12 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    SubjectTest()
{
    Span sp = Span(5);
    sp.addNumber(15);
    sp.addNumber(1);
    sp.addNumber(2);
    sp.addNumber(0);
    sp.addNumber(-3);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
void    MyTest()
{
    Span sp = Span(5);
    sp.fillVector(5);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
int main()
{
    try
    {
        SubjectTest();
        // MyTest();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
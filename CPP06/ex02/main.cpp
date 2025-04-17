/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:30:55 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/17 12:43:30 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>


Base * generate(void)
{
    std::time_t time;
    int mytime = std::time(&time);
    std::srand(mytime);
    int random = std::rand();
    // std::cout << "i: " << random << std::endl;  
    if (random % 3 == 0)
        return ( new A );
    else if (random % 3 == 1)
        return ( new B );
    else
        return ( new C );
}
void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Object A is here!" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Object B is here!" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Object C is here!" << std::endl;
    else
        std::cout << "Unkown Object!" << std::endl;
}
void identify(Base& p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "Object A is here!" << std::endl;
    }
    catch(...)
    {
        try
        {
            dynamic_cast<B &>(p);
            std::cout << "Object B is here!" << std::endl;
        }
        catch(...)
        {
            try
            {
                dynamic_cast<C &>(p);
                std::cout << "Object C is here!" << std::endl;
            }
            catch(...)
            {
                std::cout << "Unkown Object!" << std::endl;;
            }
        }
    }
}
int main()
{
    Base *ptr = generate();
    // ptr = NULL;
    identify(ptr);
    identify(*ptr);
    delete ptr;
}
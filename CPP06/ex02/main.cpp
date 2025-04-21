/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:30:55 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/21 20:50:33 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "unknown.hpp"
// #include <ctime>


Base * generate(void)
{
    std::time_t time;
    int mytime = std::time(&time);
    std::srand(mytime);
    int random = std::rand(); 
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
        std::cout << "Unknown Object!" << std::endl;
}
void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Object A is here!" << std::endl;
    }
    catch(...)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "Object B is here!" << std::endl;
        }
        catch(...)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "Object C is here!" << std::endl;
            }
            catch(...)
            {
                std::cout << "Unknown Object!" << std::endl;;
            }
        }
    }
}
int main()
{
    Base *ptr = generate();
    /*
    unknown type
        unknown *Un = new (unknown);
    */
   unknown *Un = new (unknown);
        identify(Un);
        identify(*Un);
    // identify(ptr);
    // identify(*ptr);
    delete ptr;
}
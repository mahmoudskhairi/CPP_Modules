/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:30:55 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/17 11:02:45 by mskhairi         ###   ########.fr       */
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
    std::cout << "i: " << random << std::endl;  
    if (random % 3 == 0)
        return ( new A );
    else if (random % 3 == 1)
        return ( new B );
    else
        return ( new C );
}
void identify(Base* p)
{
    

}
// void identify(Base& p)
// {}
int main()
{
    Base *ptr = generate();
    
    identify(ptr);
    // identify(ptr);
    // std::cout << "\n# ---- New Person Is Here ! ---- #" << std::endl;
    // std::cout << "\n# --------- Conversion --------- #" << std::endl;
    // std::cout << "\n # ------------------------------ #" << std::endl;
}
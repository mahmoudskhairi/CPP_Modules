/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:31:12 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/17 12:40:15 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::~A(void)
{
    if (PRINTINGMODE)
	    std::cout << "A Destructor called" << std::endl;
}
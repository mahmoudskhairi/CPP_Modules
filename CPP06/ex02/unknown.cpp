/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unknown.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:44:56 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/21 20:47:46 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unknown.hpp"

unknown::~unknown(void)
{
    if (PRINTINGMODE)
	    std::cout << "unkown Destructor called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:31:01 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/16 15:31:04 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

#include "Base.hpp"
#include <iostream>

class C : public Base
{
private:
    /* data */
    C();
public:
    ~C();
};

#endif
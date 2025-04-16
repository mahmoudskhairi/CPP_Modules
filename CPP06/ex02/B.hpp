/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:31:27 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/16 15:31:28 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

#include "Base.hpp"
#include <iostream>

class B : public Base
{
private:
    /* data */
    B();
public:
    ~B();
};

#endif
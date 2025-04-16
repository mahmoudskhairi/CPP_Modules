/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:31:16 by mskhairi          #+#    #+#             */
/*   Updated: 2025/04/16 15:31:17 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

#include "Base.hpp"
#include <iostream>

class A : public Base
{
private:
    /* data */
    A();
public:
    ~A();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:47:47 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/07 20:26:38 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point a(0, 1.5f);
    Point b(1, 0);
    Point c(-1, -1);
    Point point(0.27f, 1.1f);

    if (bsp(a, b, c, point))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
    return (0);
}

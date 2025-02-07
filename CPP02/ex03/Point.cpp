/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:48:22 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/07 19:22:56 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _X(0), _Y(0)
{
}

Point::Point(const float x, const float y) : _X(x), _Y(y)
{
    // std::cout << "##\n";
    // std::cout << "x " << x << std::endl;
    // std::cout << "y " << y << std::endl;
    // std::cout << "_x " << _X << std::endl;
    // std::cout << "_y " << _Y << std::endl;
    // std::cout << "##\n";
}

Point::Point(Point &point) : _X(point.GetX()), _Y(point.GetY())
{
}

Point &Point::operator=(Point &AssignedPoint)
{
    if (this != &AssignedPoint)
    {
        this->_X = AssignedPoint.GetX();
        this->_Y = AssignedPoint.GetY();
    }
    return (*this);
}

Fixed Point::GetX(void) const
{
    return (this->_X);
}

Fixed Point::GetY(void) const
{
    return (this->_Y);
}

Point::~Point()
{
}

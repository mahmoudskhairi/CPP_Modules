/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:48:22 by mskhairi          #+#    #+#             */
/*   Updated: 2025/02/08 17:50:06 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _X(0), _Y(0)
{
}

Point::Point(const float x, const float y) : _X(x), _Y(y)
{
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:11:50 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 17:55:39 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const a, float const b) : _x(a), _y(b)
{
}

Point::Point(const Point &p) : _x(p.getX()), _y(p.getY()) 
{
}

Point	&Point::operator=(const Point &rhs)
{
	(Fixed)this->_x = rhs.getX();
	(Fixed)this->_y = rhs.getY();
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}
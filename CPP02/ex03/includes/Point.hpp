/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:01:18 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 17:29:57 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point();
	Point(float const a, float const b);
	Point(const Point &p);
	Point	&operator=(const Point &rhs);
	~Point();
	Fixed	getX() const;
	Fixed	getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
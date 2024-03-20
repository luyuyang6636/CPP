/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <luyang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:29:45 by luyang            #+#    #+#             */
/*   Updated: 2024/03/19 18:28:27 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

static bool	onEdge(Point const a, Point const b, Point const p)
{
	if (p.getX() == a.getX() && p.getY() == a.getY())
		return (1);
	if (p.getX() == b.getX() && p.getY() == b.getY())
		return (1);
	if ((p.getX() - a.getX()) / (b.getX() - a.getX())
		== (p.getY() - a.getY()) / (b.getY() - a.getY()))
		return (1);
	return (0);
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = ((a.getX() * (b.getY() - c.getY()))
		+ (b.getX() * (c.getY() - a.getY())) 
		+ (c.getX() * (a.getY() - b.getY()))) / 2;
	
	if (area < 0)
		return (area * (-1));
	return (area);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	tmp;

	Fixed	abc = area(a, b, c);
	Fixed	abp = area(a, b, point);
	Fixed	acp = area(a, c, point);
	Fixed	bcp = area(b, c, point);

	tmp = (abc == (abp + acp + bcp));
	if (tmp == true)
	{
		if (!onEdge(a, b, point) && !onEdge(a, c, point)
			&& !onEdge(b, c, point))
			return (true);
	}
	return (false);
}




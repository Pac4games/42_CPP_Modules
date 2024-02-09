/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:32:38 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/09 12:13:00 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool	is_point_valid(const Point &p1, const Point &p2, const Point &p3, const Point &point)
{
	//y = mx + b
	//mx + b
	
	Fixed	m;
	Fixed	b;

	if ((p1.get_x() - p2.get_y()) != 0)
		m = ((p1.get_y() - p2.get_y()) / (p1.get_x() - p2.get_x()));
	else if (point.get_x() == p1.get_x())
		return (false);
	b = ((m * p1.get_x()) - p1.get_y()) * -1;
	if ((m * point.get_x()) + b - point.get_y() == 0)
		return (false);
	else if (((m * point.get_x()) + b - point.get_y() > 0) && ((m * p3.get_x()) \
	+ b - p3.get_y() > 0))
		return (true);
	else if (((m * point.get_x()) + b - point.get_y() < 0) && ((m * p3.get_x()) \
	+ b - p3.get_y() < 0))
		return (true);
	return (false);
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
	if (!is_point_valid(a, b, c, point))
		return (false);
	if (!is_point_valid(a, c, b, point))
		return (false);
	if (!is_point_valid(b, c, a, point))
		return (false);
	return (true);
}

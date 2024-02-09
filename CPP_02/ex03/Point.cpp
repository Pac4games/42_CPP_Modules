/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:23:29 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/09 12:29:08 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
	//std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
{
	//std::cout << "Point constructor called" << std::endl;
}

Point::Point(Point const &src)
{
	//std::cout << "Point copy constructor called" << std::endl;
	*this = src;
}

Point::~Point(void)
{
	//std::cout << "Point destructor called" << std::endl;
}

Point	&Point::operator=(Point const &rhs)
{
	(void)rhs;
	return (*this);
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void) const
{
	return (this->y);
}

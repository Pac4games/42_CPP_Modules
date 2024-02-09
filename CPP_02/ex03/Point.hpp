/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:20:20 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/09 11:42:43 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(const float x, const float y);
		Point(const Point &src);
		~Point(void);
		

		Fixed		get_x(void) const;
		Fixed		get_y(void) const;

	private:
		Point(void);
		Point		&operator=(Point const &rhs);
		const Fixed	x;
		const Fixed	y;
};

#endif

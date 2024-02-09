/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:13:08 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/09 12:27:21 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdlib>

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point);

static void	print_bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
	if (bsp(a, b, c, point) == true)
		std::cout << "The provided point is inside the triangle" << std::endl;
	else
		std::cout << "The provided point is outside the triangle" << std::endl;
}

int	main(void)
{
	Point	a(1, 1);
	Point	b(1, 5);
	Point	c(5, 3);
	Point	valid(2.0f, 2.0f);
	Point	invalid(5.0f, 5.0f);
	Point	vertex(5.0f, 3.0f);
	Point	edge(3.0f, 2.0f);
	
	print_bsp(a, b, c, valid);
	print_bsp(a, b, c, invalid);
	print_bsp(a, b, c, vertex);
	print_bsp(a, b, c, edge);

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:24:07 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/29 15:42:49 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int			a = 6;
	int			b = 9;
	::swap(a, b);
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "::min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "::max(a, b) = " << ::max(a, b) << std::endl << std::endl;

	float		c = 42.0f;
	float		d = 420.0f;
	::swap(c, d);
	std::cout << "c = " << c << "; d = " << d << std::endl;
	std::cout << "::min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "::max(c, d) = " << ::max(c, d) << std::endl << std::endl;

	char		e = 'e';
	char		f = 'f';
	::swap(e, f);
	std::cout << "e = " << e << "; e = " << e << std::endl;
	std::cout << "::min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "::max(e, f) = " << ::max(e, f) << std::endl << std::endl;

	std::string	g = "sans";
	std::string h = "paps";
	::swap(g, h);
	std::cout << "g = " << g << "; h = " << h << std::endl;
	std::cout << "::min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "::max(g, h) = " << ::max(g, h) << std::endl;
}

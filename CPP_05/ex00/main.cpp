/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:09:51 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/20 11:09:42 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>

int	main(void)
{
	try
	{
		Bureaucrat	a("a", 1);
		Bureaucrat	b("b", 150);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.incrementGrade();
		b.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

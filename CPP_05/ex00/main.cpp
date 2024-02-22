/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:09:51 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/21 14:30:54 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>

int	main(void)
{
	try
	{
		Bureaucrat	glados("GLaDOS", 1);
		Bureaucrat	wheatley("Wheatley", 150);

		std::cout << glados << std::endl;
		std::cout << wheatley << std::endl;
		glados.incrementGrade();
		wheatley.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

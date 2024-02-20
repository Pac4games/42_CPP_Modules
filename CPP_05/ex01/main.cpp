/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:34:39 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/20 12:46:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <cstdlib>

int	main(void)
{
	try
	{
		Bureaucrat	glados("GLaDOS", 1);
		Bureaucrat	wheatley("Wheatley", 6);
		Form		cake("Cake", 6, 7);
		Form		cupcake(cake);

		std::cout << glados << std::endl;
		std::cout << wheatley << std::endl;
		std::cout << cake << std::endl << std::endl;

		cake.beSigned(glados);
		std::cout << cake << std::endl;
		cake.beSigned(glados);
		std::cout << std:: endl << cupcake << std::endl;
		cupcake.beSigned(wheatley);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

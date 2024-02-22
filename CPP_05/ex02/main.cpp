/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:26:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 12:52:49 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int	main(void)
{
	try
	{
		Bureaucrat				maddie("Madeline", 10);
		ShrubberyCreationForm	berry("Berry");	

		std::cout << berry << std::endl << std::endl;
		berry.beSigned(maddie);
		berry.execute(maddie);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

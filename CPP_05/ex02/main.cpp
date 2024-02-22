/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:26:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 16:53:30 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int	main(void)
{
	try
	{
		Bureaucrat				maddie("Madeline", 134);
		Bureaucrat				glados("GLaDOS", 62);
		Bureaucrat				obamna("Obamna", 7);
		Bureaucrat				kte("Knuckles", 1);
		ShrubberyCreationForm	golden("Golden");	
		RobotomyRequestForm		wheatley("Wheatley");
		PresidentialPardonForm	eggman("Dr. Ivo Robotnik");

		std::cout << golden << std::endl << std::endl;
		golden.beSigned(maddie);
		maddie.executeForm(golden);
		glados.executeForm(golden);

		std::cout << std::endl << wheatley << std::endl << std::endl;
		wheatley.beSigned(glados);
		glados.executeForm(wheatley);
		obamna.executeForm(wheatley);

		std::cout << std::endl << eggman << std::endl << std::endl;
		eggman.beSigned(obamna);
		obamna.executeForm(eggman);
		kte.executeForm(eggman);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

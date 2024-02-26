/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:56:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/26 12:42:30 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	cave("Cave Johnson", 1);
		Intern		caroline;
		AForm		*paperwork;

		for (int i = 0; i < 4; i++)
		{
			switch (i)
			{
				case 0:
					paperwork = caroline.makeForm("shrubbery request", "Wheatley");
					break;
				case 1:
					paperwork = caroline.makeForm("robotomy request", "GLaDOS");
					break;
				case 2:
					paperwork = caroline.makeForm("presidential request", "Chell");
					break;
				default:
					paperwork = caroline.makeForm("human rights request", "Caroline");
					break;
			}

			if (paperwork != NULL)
			{
				paperwork->beSigned(cave);
				cave.executeForm(*paperwork);
				delete paperwork;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}

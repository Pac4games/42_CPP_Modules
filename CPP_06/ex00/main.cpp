/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:57:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 14:05:41 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::converter(av[1]);
	else
	{
		std::cout << "Error: please enter one and only one argument" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

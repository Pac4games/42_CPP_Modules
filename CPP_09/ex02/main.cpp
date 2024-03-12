/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:05:44 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/12 17:09:56 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	PmergeMe	sorter;
	sorter.parser(ac, av);
	return (EXIT_SUCCESS);
}

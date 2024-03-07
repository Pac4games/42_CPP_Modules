/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:23:59 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/07 14:06:54 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: please provide one and only one argument" << std::endl;
		return (EXIT_FAILURE);
	}

	parse_input(av[1]);
	return (EXIT_SUCCESS);
}

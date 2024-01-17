/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:43:43 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/17 11:45:17 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	Harl	client;

	if (ac == 2)
		client.complain(av[1]);
	else
		client.complain("");

	return (EXIT_SUCCESS);
}

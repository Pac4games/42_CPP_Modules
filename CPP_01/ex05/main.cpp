/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:21:46 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/17 11:22:49 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(void)
{
	Harl	client;

	client.complain("DEBUG");
	client.complain("INFO");
	client.complain("WARNING");
	client.complain("ERROR");

	return (EXIT_SUCCESS);
}

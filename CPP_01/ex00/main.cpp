/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:58 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/12 16:05:56 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int	main(void)
{
	Zombie	*new_zombie	= newZombie("Alfredo");

	randomChump("Roberto");
	new_zombie->announce();
	delete new_zombie;

	return (EXIT_SUCCESS);
}

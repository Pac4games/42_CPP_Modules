/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:42:00 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/31 10:48:00 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <cstdlib>

int	main(void)
{
	DiamondTrap	drem("Drem");

	drem.takeDamage(4);
	drem.check();
	drem.takeDamage(20);
	drem.check();
	drem.beRepaired(35);
	drem.check();
	drem.takeDamage(42);
	drem.check();
	drem.attack("Thomaty");
	drem.check();
	for(size_t i = 0; i < 10; i++)
	{
		drem.attack("Thomaty");
		drem.check();
	}
	drem.highFivesGuys();
	drem.whoAmI();

	return (EXIT_SUCCESS);
}

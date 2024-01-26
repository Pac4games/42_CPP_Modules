/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:33:03 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/26 12:48:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

int	main(void)
{
	ClapTrap	clappity("Clappity");
	ClapTrap	trappity("Trappity");

	clappity.takeDamage(2);
	trappity = clappity;
	trappity.check();
	trappity.takeDamage(4);
	trappity.check();
	trappity.beRepaired(10);
	trappity.check();
	trappity.takeDamage(7);
	trappity.check();
	trappity.attack("Clappity");
	trappity.check();
	for (int i = 0; i < 10; i++)
	{
		trappity.attack("Clappity");
		trappity.check();
	}
	clappity.takeDamage(20);
	clappity.check();
	clappity.takeDamage(15);
	clappity.check();
	clappity.takeDamage(10);
	clappity.check();

	return (EXIT_SUCCESS);
}

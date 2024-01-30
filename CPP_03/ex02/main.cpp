/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:34:37 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 16:49:23 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	freddy("Frederickson");
	FragTrap	fazbear("Fazbear");

	freddy.takeDamage(4);
	freddy.check();
	fazbear = freddy;
	fazbear.check();
	freddy.takeDamage(20);
	freddy.check();
	freddy.beRepaired(35);
	freddy.check();
	freddy.takeDamage(42);
	freddy.check();
	freddy.attack("Fazbear");
	freddy.check();
	for(size_t i = 0; i < 10; i++)
	{
		freddy.attack("Fazbear");
		freddy.check();
	}
	freddy.highFivesGuys();
	freddy.check();
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:07:20 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 15:32:18 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int	main(void)
{
	ClapTrap	clappity("Clappity");
	ScavTrap	scavy("Scavy");

	scavy.takeDamage(3);
	scavy.check();
	scavy.takeDamage(50);
	scavy.check();
	scavy.beRepaired(42);
	scavy.check();
	scavy.takeDamage(14);
	scavy.check();
	scavy.attack("Clappity");
	scavy.check();
	for (int i = 0; i < 10; i++)
	{
		scavy.attack("Clappity");
		scavy.check();
	}
	scavy.guardGate();

	return (EXIT_SUCCESS);
}

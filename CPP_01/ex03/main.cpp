/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:12:21 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/05 12:32:27 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	chuck("Chuck", club);
		chuck.attack();
		club.setType("some other type of club");
		chuck.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jimmy("Jimmy");
		jimmy.setWeapon(club);
		jimmy.attack();
		club.setType("some other type of club");
		jimmy.attack();
	}

	return (0);
}

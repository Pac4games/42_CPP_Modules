/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:01:58 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/05 12:18:34 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int	main(void)
{
	int		N = 9;
	Zombie	*horde = zombieHorde(N, "Speedy");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	
	return (EXIT_SUCCESS);
}

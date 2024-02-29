/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:30:20 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/29 16:37:21 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Vessel.hpp"
#include <iomanip>

int	main(void)
{
	int	arr1[5] = {8, 98, 42, 333, -1};
	for (int i = 0; i < 5; i++)
		std::cout << std::setw(2) << arr1[i] << " - ";
	std::cout << std::endl;
}

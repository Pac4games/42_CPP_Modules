/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:16:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/04 15:12:50 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Vessel.hpp"
#include <cstdlib>
#include <iostream>

int	main(void)
{
	try
	{
		Array<int>		arr1(5);
		for (int i = 0; i < 5; i++)
		{
			arr1[i] = i;
//			if (arr1[i + 1])
				std::cout << arr1[i] << " ";
		}
		std::cout << std::endl << "int array size: " << arr1.size() \
		<< std::endl << std::endl;

		Array<char>		arr2(7);
		for (int i = 0; i < 7; i++)
		{
			arr2[i] = i + 'a';
//			if (arr2[i + 1])
				std::cout << arr2[i] << " ";
		}
		std::cout << std::endl << "char array size: " << arr2.size() \
		<< std::endl << std::endl;

		Array<Vessel>	arr3(3);
		std::string		names[3] = {"Kris", "Susie", "Ralsei"};
		int				hps[3] = {90, 110, 70};
		int				atks[3] = {10, 14, 8};
		int				defs[3] = {2, 2, 2};
		for (int i = 0; i < 3; i++)
		{
			arr3[i] = Vessel(names[i], hps[i], atks[i], defs[i]);
			check_stats(arr3[i]);
		}
		std::cout << "Vessel array size: " << arr3.size() << std::endl << std::endl;

		std::cout << "Invalid tests:" << std::endl;
			std::cout << arr2[-1] << std::endl;
			std::cout << arr1[42] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

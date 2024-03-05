/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:59:26 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/05 12:09:28 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int	main(void)
{
	try
	{
		std::list<int>				cont1;
		std::deque<int>				cont2;
		std::vector<int>			cont3;

		for (int i = 0; i < 10; i++)
			cont1.push_back(i);
		std::list<int>::iterator	idx1 = easyfind(cont1, 4);
		std::cout << "Value found in cont1 at index " << *idx1 << std::endl;

		cont2.assign(cont1.begin(), cont1.end());
		std::deque<int>::iterator	idx2 = easyfind(cont2, 2);
		std::cout << "Value found in cont2 at index " << *idx2 << std::endl;
		
		cont3.assign(cont2.begin(), cont2.end());
		std::vector<int>::iterator	idx3 = easyfind(cont3, 7);
		std::cout << "Value found in cont3 at index " << *idx3 << std::endl;

		// Invalid tests
		/*
		std::list<int>::iterator	idx4 = easyfind(cont1, 11);
		std::cout << "Value found in cont1 at index " << *idx4 << std::endl;
		
		std::vector<int>::iterator	idx5 = easyfind(cont3, -5);
		std::cout << "Value found in cont3 at index " << *idx5 << std::endl;
		*/
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

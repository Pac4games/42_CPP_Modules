/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:02:06 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/18 12:38:31 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <list>
#include <time.h>

int	main(void)
{
	try
	{
		Span			span1(19);
		std::list<int>	nums;

		std::srand(time(0));
		for (int i = 0; i < 19; i++)
			nums.push_back(std::rand() % 10000);
		span1.addNumberRange(nums.begin(), nums.end());

		span1.printContent();
		std::cout << "Shortest span1: " << span1.shortestSpan() << std::endl;
		std::cout << "Longest span1: " << span1.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------------------------------" << std::endl;

	//Subject tests
	try
	{
		Span		span2(5);

		span2.addNumber(6);
		span2.addNumber(3);
		span2.addNumber(17);
		span2.addNumber(9);
		span2.addNumber(11);

		span2.printContent();
		std::cout << "Shortest span2: " << span2.shortestSpan() << std::endl;
		std::cout << "Longest span2: " << span2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

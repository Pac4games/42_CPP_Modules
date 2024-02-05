/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:51:38 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/02 16:45:42 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

int	main(void)
{
	Animal	*frens[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			frens[i] = new Dog;
		else
			frens[i] = new Cat;
	}
	std::cout << "My first fren is a " << frens[0]->get_type() \
	<< " and the last one is a " << frens[9]->get_type() << std::endl;

	//Dog tests
	std::cout << ((Dog *)frens[0])->get_idea(0) << std::endl << std::endl;

	Animal	*testDog = new Dog(*((Dog *)frens[0]));

	((Dog *)frens[0])->set_idea(0, "food consumption time");

	std::cout << ((Dog *)frens[0])->get_idea(0) << std::endl;
	std::cout << ((Dog *)testDog)->get_idea(0) << std::endl << std::endl;

	delete testDog;

	//Cat tests
	std::cout << ((Cat *)frens[0])->get_idea(0) << std::endl << std::endl;

	Animal	*testCat = new Cat(*((Cat *)frens[9]));

	((Dog *)frens[9])->set_idea(10, "*nothing but silence*");

	std::cout << ((Cat *)frens[9])->get_idea(10) << std::endl;
	std::cout << ((Cat *)testCat)->get_idea(10) << std::endl;

	delete testCat;

	//Destroy frens.
	for (int i = 0; i < 10; i++)
		delete frens[i];

	//Subject tests
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	delete j;
	delete i;

	return (EXIT_SUCCESS);
}

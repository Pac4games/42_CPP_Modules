/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:29:32 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 16:33:22 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int	main(void)
{
	std::cout << "Regular Animal, Dog and Cat tests:" << std::endl << std::endl;
	const Animal		*maroon5 = new Animal();
	const Dog			*doge = new Dog();
	const Cat			*car = new Cat();
	std::cout << std::endl;

	std::cout << "The type of maroon5 is " << maroon5->get_type() << std::endl;
	std::cout << "The type of doge is " << doge->get_type() << std::endl;
	std::cout << "The type of car is " << car->get_type() << std::endl \
	<< std::endl;

	std::cout << maroon5->get_type() << " says: ";
	maroon5->makeSound();
	std::cout << doge->get_type() << " says: ";
	doge->makeSound();
	std::cout << car->get_type() << " says: ";
	car->makeSound();
	std::cout << std::endl;

	delete maroon5;
	delete doge;
	delete car;

	std::cout << std::endl << "Wrong Cat but regular Animal and Dog tests:" \
	<< std::endl << std::endl;
	maroon5 = new Animal();
	doge = new Dog();
	const WrongAnimal	*weirdCar = new WrongCat();
	std::cout << std::endl;

	std::cout << "The type of maroon 5 is " << maroon5->get_type() << std::endl;
	std::cout << "The type of doge is " << doge->get_type() << std::endl;
	std::cout << "The type of weirdCar is " << weirdCar->get_type() << std::endl \
	<< std::endl;

	std::cout << maroon5->get_type() << " says: ";
	maroon5->makeSound();
	std::cout << doge->get_type() << " says: ";
	doge->makeSound();
	std::cout << weirdCar->get_type() << " says: ";
	weirdCar->makeSound();
	std::cout << std::endl;

	delete maroon5;
	delete doge;
	delete weirdCar;

	return (EXIT_SUCCESS);
}

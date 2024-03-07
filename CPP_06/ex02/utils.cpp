/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:14:27 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/07 17:18:24 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

A::A(void)
{
	std::cout << "A default constructor called" << std::endl;
}

B::B(void)
{
	std::cout << "B default constructor called" << std::endl;
}

C::C(void)
{
	std::cout << "C default constructor called" << std::endl;
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return;
	}

	B	*b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return;
	}

	C	*c = dynamic_cast<C *>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &bc) {}

	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &bc) {}

	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &bc) {}
}

Base	*randomize_class(void)
{
	Base		*res;
	static int	counter = time(0);

	std::srand(counter++);
	switch (std::rand() % 3)
	{
		case 0:
			res = new A();
			break;
		case 1:
			res = new B();
			break;
		case 2:
			res = new C();
			break;
	}
	return (res);
}

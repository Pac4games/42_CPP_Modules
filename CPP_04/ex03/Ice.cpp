/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:10:19 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/08 12:15:53 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*res = new Ice;

	return (res);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at *" << target.getName() << " *" << std::endl;
}

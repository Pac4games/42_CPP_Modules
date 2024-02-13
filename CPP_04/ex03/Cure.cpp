/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:50:36 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/12 12:23:05 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
//	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
//	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
//	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*res = new Cure;

	return (res);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

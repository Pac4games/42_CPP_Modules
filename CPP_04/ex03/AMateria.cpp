/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:11:12 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/12 12:22:43 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
//	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& src)
{
//	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	return;
}

AMateria::~AMateria(void)
{
//	std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	(void)rhs;
	return (*this);
}

std::string	const&	AMateria::getType(void) const
{
	return (this->_type);
}

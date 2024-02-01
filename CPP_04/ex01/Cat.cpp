/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:46:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 12:54:47 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAAAAAAAAAAAAAAAAOOOOOOOOOOOOWWWWWWW" << std::endl;
}

std::string	Cat::get_type(void) const
{
	return (this->_type);
}

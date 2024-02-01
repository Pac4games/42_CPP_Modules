/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:22:59 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 12:48:33 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "AAAWOOOOOOOOOO" << std::endl;
}

std::string	Dog::get_type(void) const
{
	return (this->_type);
}

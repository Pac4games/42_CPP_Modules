/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:46:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/02 17:42:41 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
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

std::string	&Cat::get_idea(int i) const
{
	return (this->_brain->ideas[i]);
}

void	Cat::set_idea(int i, std::string const &idea)
{
	this->_brain->ideas[i] = idea;
}

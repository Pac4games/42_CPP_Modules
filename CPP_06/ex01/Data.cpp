/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:12:13 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 16:42:48 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _raw(0)
{
//	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const uintptr_t &raw) : _raw(raw)
{
//	std::cout << "The other Data constructor called" << std::endl;
}

Data::Data(const Data &src) 
{
//	std::cout << "Data copy constructor called" << std::endl;
	*this = src;
}

Data::~Data(void)
{
//	std::cout << "Data destructor called" << std::endl;
}

Data	&Data::operator=(const Data &rhs)
{
	if (this != &rhs)
		this->_raw = rhs._raw;
	return (*this);
}

uintptr_t	Data::get_raw(void) const
{
	return (this->_raw);
}

void	Data::set_raw(const uintptr_t &raw)
{
	this->_raw = raw;
}

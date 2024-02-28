/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:22:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 16:40:24 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
//	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &src)
{
//	std::cout << "Serializer copy constructor called" << std::endl;
	*this = src;
}

Serializer::~Serializer(void)
{
//	std::cout << "Serializer destructor called" << std::endl;
}

Serializer	&Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:42:02 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/27 15:45:56 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
//	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
//	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{
//	std::cout << "ScalarConverter destructor called" << std::endl;
}	

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

void	ScalarConverter::converter(const std::string &in)
{

}

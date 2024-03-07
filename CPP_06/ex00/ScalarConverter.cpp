/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:42:02 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/07 15:09:33 by paugonca         ###   ########.fr       */
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
	switch (static_cast<int>(get_ScalarType(in)))
	{
		case e_char:
			conv2char(in);
			break;
		case e_int:
			conv2int(in);
			break;
		case e_float:
			conv2float(in);
			break;
		case e_double:
			conv2double(in);
			break;
		default:
			std::cout << "Error: wrong syntax. " \
			<< "Please insert a value of type char, int, float or double" << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:41:55 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/18 13:35:00 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed(int const &src)
{
	std::cout << "Int constructor called" << std::endl;
	this->_num = src << this->_frac_bits;
}

Fixed::Fixed(float const &src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_num = roundf(src * pow(2, this->_frac_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_num = rhs.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_num);
}

void	Fixed::setRawBits(int const &raw)
{
	this->_num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_num / roundf(1 << this->_frac_bits)));
}

int	Fixed::toInt(void) const
{
	return (this->_num >> this->_frac_bits);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return (o);
}

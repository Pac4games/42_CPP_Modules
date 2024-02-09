/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:04:43 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/18 17:35:55 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed(int const &src)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_num = src << this->_frac_bits;
}

Fixed::Fixed(float const &src)
{
//	std::cout << "Float constructor called" << std::endl;
	this->_num = roundf(src * pow(2, this->_frac_bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
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

Fixed	&Fixed::operator=(Fixed const &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_num = rhs.getRawBits();

	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed (this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed (this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed (this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed (this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator++(void)
{
	this->_num++;
	
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_num++;
	
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	this->_num--;
	
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_num--;
	
	return (tmp);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed	&Fixed::min(Fixed const &num1, Fixed const &num2)
{
	if (num1 < num2)
		return ((Fixed &)num1);
	return ((Fixed &)num2);
}

Fixed	&Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

Fixed	&Fixed::max(Fixed const &num1, Fixed const &num2)
{
	if (num1 > num2)
		return ((Fixed &)num1);
	return ((Fixed &)num2);
}

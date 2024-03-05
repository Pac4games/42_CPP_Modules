/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:26:23 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/05 14:23:42 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <set>
#include <stdexcept>

Span::Span(void)
{
//	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const unsigned int &N) : _size(N)
{
//	std::cout << "Span constructor of size " << N << " called" << std::endl;
}

Span::Span(const Span &src)
{
//	std::cout << "Span copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Span::~Span(void)
{
//	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=(const Span &rhs)
{
	if (!this->_array.empty())
		this->_array.clear();
	for (std::multiset<int>::iterator i; i != rhs._array.end(); i++)
		this->_array.insert(*i);
	this->_size = rhs._size;
	return (*this);
}

void	Span::addNumber(const int &num)
{
	if (this->_array.size() == this->_size)
		throw std::length_error("Exception: Span is currently full, impossible to add more values");
	this->_array.insert(num);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_array.empty())
		throw std::length_error("Exception: Span is currently empty");

	std::multiset<int>::iterator	tmp = this->_array.begin();
	int								res = *(++tmp) - *(--tmp);
	for (std::multiset<int>::iterator i = ++this->_array.begin(); \
	i != this->_array.end(); i++, tmp++)
		if (*i - *tmp < res)
			res = *i - *tmp;
	
	return (res);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_array.empty())
		throw std::length_error("Exception: Span is currently empty");

	std::multiset<int>::iterator	min = std::min_element(this->_array.begin(), this->_array.end());
	std::multiset<int>::iterator	max = std::max_element(this->_array.begin(), this->_array.end());
	int								res = *max - *min;

	return (res);
}

void	Span::printContent(void) const
{
	if (this->_array.empty())
		throw std::length_error("Exception: Span is currently empty");
	
	for (std::multiset<int>::iterator i = this->_array.begin(); \
	i != this->_array.end(); i++)
		std::cout << *i << std::endl;
	std::cout << std::endl;
}

const unsigned int &Span::size(void) const
{
	return (this->_size);
}

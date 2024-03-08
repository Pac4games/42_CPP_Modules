/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:18:56 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/08 16:26:37 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
//	std::cout << "PmergeMe default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
//	std::cout << "PmergeMe copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

PmergeMe::~PmergeMe(void)
{
//	std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	this->_lst = rhs._lst;
	this->_lst_start = rhs._lst_start;
	this->_lst_end = rhs._lst_end;
	this->_deq = rhs._deq;
	this->_deq_start = rhs._deq_start;
	this->_deq_end = rhs._deq_end;
	
	return (*this);
}



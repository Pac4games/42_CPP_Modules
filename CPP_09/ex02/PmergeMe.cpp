/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:18:56 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/11 16:05:36 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static int	lst_findPair(int value, std::list<std::pair<int, int> > &pair)
{
	int	res;

	for (std::list<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
	{
		res = (value == i->first) ? i->second : (value == i->second) ? i->first : -2;
		if (res != -2)
			return (res);
	}
	return (res);
}

static int	deq_findPair(int value, std::deque<std::pair<int, int> > &pair)
{
	int	res;

	for (std::deque<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
	{
		res = (value == i->first) ? i->second : (value == i->second) ? i->first : -2;
		if (res != -2)
			return (res);
	}
	return (res);
}

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

void	PmergeMe::lst_print(std::list<int> lst)
{
	for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
		std::cout << *i << " ";
	std::cout << " " << std::endl;
}

void	PmergeMe::lst_print(void)
{
	for (std::list<int>::iterator i = _lst.begin(); i != _lst.end(); i++)
		std::cout << *i << " ";
	std::cout << " " << std::endl;
}

void	PmergeMe::lst_insertPend(std::list<std::pair<int, int> > &pair, std::list<int> &main)
{
	int								tmp;

	for (std::list<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
	{
		tmp = lst_findPair(i->first, pair);
		std::list<int>::iterator	j = main.begin();
		while (*j != tmp && *j < i->first)
			j++;
		if (i->first != -1)
			main.insert(j, i->first);
	}
	_lst_end = clock();
	std::cout << "After: ";
	lst_print(main);
}

void	PmergeMe::lst_insertMain(std::list<std::pair<int, int> > &pair)
{
	std::list<int>					main;

	main.push_back(pair.begin()->second);
	for (std::list<std::pair<int, int> >::iterator i = ++pair.begin(); \
	i != pair.end(); i++)
	{
		std::list<int>::iterator	j = main.begin();
		while (j != main.end())
		{
			if (i->second < *j)
			{
				main.insert(j, i->second);
				break;
			}
			j++;
		}
		j == main.end() ? main.push_back(i->second) : void();
	}
	lst_insertPend(pair, main);
}

void	PmergeMe::lst_swapPair(std::list<std::pair<int, int> > &pair)
{
	for (std::list<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
		i->first > i->second ? std::swap(i->first, i->second) : void();
	lst_insertMain(pair);
}

void	PmergeMe::lst_divide(void)
{
	std::list<std::pair<int, int> >	pair;
	int								start, end;

	_lst_start = clock();
	for (std::list<int>::iterator i = _lst.begin(); i != _lst.end(); i++)
	{
		start = *i;
		if (std::distance(i, _lst.end()) > 0)
		{
			end = *i++;
			pair.push_back(std::make_pair(start, end));
		}
		else
			pair.push_back(std::make_pair(start, -1));
	}
	lst_swapPair(pair);
}

void	PmergeMe::deq_print(std::deque<int> deq)
{
	for (std::deque<int>::iterator i = deq.begin(); i != deq.end(); i++)
		std::cout << *i << " ";
	std::cout << " " << std::endl;
}

void	PmergeMe::deq_print(void)
{
	for (std::deque<int>::iterator i = _deq.begin(); i != _deq.end(); i++)
		std::cout << *i << " ";
	std::cout << " " << std::endl;
}

void	PmergeMe::deq_insertPend(std::deque<std::pair<int, int> > &pair, std::deque<int> &main)
{
	int								tmp;

	for (std::deque<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
	{
		tmp = deq_findPair(i->first, pair);
		std::deque<int>::iterator	j = main.begin();
		while (*j != tmp && *j < i->first)
			j++;
		if (i->first != -1)
			main.insert(j, i->first);
	}
	_deq_end = clock();
	std::cout << "After: ";
	deq_print(main);
}

void	PmergeMe::deq_insertMain(std::deque<std::pair<int, int> > &pair)
{
	std::deque<int>					main;

	main.push_back(pair.begin()->second);
	for (std::deque<std::pair<int, int> >::iterator i = ++pair.begin(); \
	i != pair.end(); i++)
	{
		std::deque<int>::iterator	j = main.begin();
		while (j != main.end())
		{
			if (i->second < *j)
			{
				main.insert(j, i->second);
				break;
			}
			j++;
		}
		j == main.end() ? main.push_back(i->second) : void();
	}
	deq_insertPend(pair, main);
}

void	PmergeMe::deq_swapPair(std::deque<std::pair<int, int> > &pair)
{
	for (std::deque<std::pair<int, int> >::iterator i = pair.begin(); \
	i != pair.end(); i++)
		i->first > i->second ? std::swap(i->first, i->second) : void();
	deq_insertMain(pair);
}

void	PmergeMe::deq_divide(void)
{
	std::deque<std::pair<int, int> >	pair;
	int									start, end;

	_deq_start = clock();
	for (std::deque<int>::iterator i = _deq.begin(); i != _deq.end(); i++)
	{
		start = *i;
		if (std::distance(i, _deq.end()) > 0)
		{
			end = *i++;
			pair.push_back(std::make_pair(start, end));
		}
		else
			pair.push_back(std::make_pair(start, -1));
	}
	deq_swapPair(pair);
}

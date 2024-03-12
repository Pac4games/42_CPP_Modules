/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:18:56 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/12 17:11:57 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

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

static int	my_atoi(char *str)
{
	int	res = 0;
	int	i = 0;

	for (int j = 0; str[j++]; j++)
	{
		if (str[j] == '+' && j == 0)
			i++;
		else if (str[j] < '0' || str[j] > '9')
			return (-1);
	}
	while (str[i])
		res = res * 10 + (str[i++] - '0');
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

void	PmergeMe::lst_print(std::list<int> lst) const
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

void	PmergeMe::deq_print(std::deque<int> deq) const
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

bool	PmergeMe::checkDups(void)
{
	std::list<int>::iterator	i;
	for (std::list<int>::iterator j = _lst.begin(); j != _lst.end(); j++)
	{
		i = _lst.begin();
		while (++i != j)
			continue;
		for (; i != _lst.end(); i++)
			if (*i == *j)
				return (true);
	}
	return (false);
}

bool	PmergeMe::parser(int ac, char **av)
{
	int		tmp;
	for (int i = 1; i < ac; i++)
	{
		tmp = my_atoi(av[i]);
		if (tmp == -1)
		{
			std::cout << "Error: please provide only numeric arguments" << std::endl;
			return (false);
		}
		_lst.push_back(tmp);
		_deq.push_back(tmp);
	}
	if (checkDups())
	{
		std::cout << "Error: duplicated arguments" << std::endl;
		return (false);
	}

	std::cout << "Before: ";
	lst_print();
	lst_divide();
	std::cout << std::endl << std::endl;
	std::cout << "Before: ";
	deq_print();
	deq_divide();
	double	lst_time = double(_lst_end - _lst_start) / CLOCKS_PER_SEC * 1000.0;
	double	deq_time = double(_deq_end - _deq_start) / CLOCKS_PER_SEC * 1000.0;
	std::cout << "Time to sort a range of " << ac - 1 \
	<< " elements with std::list: " << lst_time << " ms" << std::endl;
	std::cout << "Time to sort a range of " << ac - 1 \
	<< " elements with std::deque: " << deq_time << " ms" << std::endl; 

	return (true);
}

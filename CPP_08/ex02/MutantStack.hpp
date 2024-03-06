/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:29:58 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/06 13:06:11 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &src);
		~MutantStack(void);
		MutantStack							&operator=(const MutantStack &rhs);

		typedef typename MutantStack<T, Container>\
		::container_type::iterator			iterator;
		typedef typename MutantStack<T, Container>\
		::container_type::reverse_iterator	reverse_iterator;

		iterator							begin(void);
		iterator							end(void);
		reverse_iterator					rbegin(void);
		reverse_iterator					rend(void);
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>()
{
//	std::cout << "MutantStack default constructor called" << std::endl;	
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &src) : std::stack<T, Container>()
{
//	std::cout << "MutantStack copy construtor called" << std::endl;
	if (this != &src)
		*this = src;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{
//	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=(const MutantStack &rhs)
{
	*this = std::stack<T, Container>::operator=(rhs);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void)
{
	return (this->std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void)
{
	return (this->std::stack<T, Container>::c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rbegin(void)
{
	return (this->std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rend(void)
{
	return (this->std::stack<T, Container>::c.rend());
}

#endif

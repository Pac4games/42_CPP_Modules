/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:29:58 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/05 17:18:03 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <iostream>

template <typename T, typename Container = std::list<T>>
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

#endif

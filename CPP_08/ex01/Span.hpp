/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:14:00 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/05 14:23:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <stdexcept>
# include <iostream>

class	Span
{
	public:
		Span(const unsigned int &N);
		Span(Span const &src);
		~Span(void);
		Span				&operator=(const Span &rhs);

		void				addNumber(const int &num);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		void				printContent(void)const;
		const unsigned int	&size(void)const;

		template <class InputIt>
		void				addNumberRange(InputIt first, InputIt last);

	private:
		Span(void);
		unsigned int		_size;
		std::multiset<int>	_array;
};

template <class InputIt>
void	Span::addNumberRange(InputIt first, InputIt last)
{
	for (InputIt i = first; i != last; i++)
	{
		if (this->_array.size() == this->_size)
			throw std::length_error("Exception: Span is currently full, impossible to add more values");
		this->_array.insert(*i);
	}
}

#endif

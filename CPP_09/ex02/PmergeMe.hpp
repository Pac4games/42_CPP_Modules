/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:00:13 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/08 14:51:36 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <deque>
# include <ctime>

class	PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		~PmergeMe(void);
		PmergeMe		&operator=(const PmergeMe &rhs);

		int				parse(int ac, char **av);

	private:
		clock_t			_lst_start;
		clock_t			_lst_end;
		std::list<int>	_lst;

		clock_t			_deq_start;
		clock_t			_deq_end;
		std::list<int>	_deq;
};

#endif

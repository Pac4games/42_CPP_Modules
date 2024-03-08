/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:00:13 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/08 16:29:12 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <deque>
# include <ctime>
# include <iostream>
# include <utility>

class	PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		~PmergeMe(void);
		PmergeMe		&operator=(const PmergeMe &rhs);

		int				lst_findPair(int value, std::list<std::pair<int, int> > &lst_pair);

		int				parse(int ac, char **av);

	private:
		clock_t			_lst_start, _lst_end, _deq_start, _deq_end;
		std::list<int>	_lst, _deq;
};

#endif

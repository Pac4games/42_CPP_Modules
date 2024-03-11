/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:00:13 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/11 16:06:00 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <deque>
# include <ctime>
# include <iostream>
# include <utility>
# include <iterator>

class	PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		~PmergeMe(void);
		PmergeMe		&operator=(const PmergeMe &rhs);

		void			lst_print(std::list<int> lst);
		void			lst_print(void);
		void			lst_insertPend(std::list<std::pair<int, int> > &pair, std::list<int> &main);
		void			lst_insertMain(std::list<std::pair<int, int> > &pair);
		void			lst_swapPair(std::list<std::pair<int, int> > &pair);
		void			lst_divide(void);

		void			deq_print(std::deque<int> deq);
		void			deq_print(void);
		void			deq_insertPend(std::deque<std::pair<int, int> > &pair, std::deque<int> &main);
		void			deq_insertMain(std::deque<std::pair<int, int> > &pair);
		void			deq_swapPair(std::deque<std::pair<int, int> > &pair);
		void			deq_divide(void);

		int				parse(int ac, char **av);

	private:
		clock_t			_lst_start, _lst_end, _deq_start, _deq_end;
		std::list<int>	_lst, _deq;
};

#endif

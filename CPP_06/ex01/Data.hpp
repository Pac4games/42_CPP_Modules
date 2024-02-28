/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:43:44 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 16:42:32 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

class	Data
{
	public:
		Data(void);
		Data(const uintptr_t &raw);
		Data(const Data &src);
		~Data(void);
		Data		&operator=(const Data &rhs);

		uintptr_t	get_raw(void) const;
		void		set_raw(const uintptr_t &raw);

	private:
		uintptr_t	_raw;
};

#endif

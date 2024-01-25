/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:23:39 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/25 14:59:48 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/* The Orthodox Canonical Form consists of:
 * - a default constructor;
 * - a copy constructor;
 * - a copy assignment operator overload;
 * - a destructor;
 */ 

// "rhs" stands for "Right-hand side"

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src); // Copy constructor
		~Fixed(void);

		Fixed				&operator=(Fixed const& rhs); // Copy assignment operator overload
		int const			&getRawBits(void) const;
		void				setRawBits(int const raw);

	private:
		int					_num;
		static int const	_frac_bits = 8;
};

#endif

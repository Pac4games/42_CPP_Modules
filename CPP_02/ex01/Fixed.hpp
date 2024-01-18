/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:32:06 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/18 13:25:18 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const &src);
		Fixed(float const &src);
		~Fixed(void);

		Fixed				&operator=(Fixed const &rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const &raw);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int	_num;
		static int const	_frac_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif

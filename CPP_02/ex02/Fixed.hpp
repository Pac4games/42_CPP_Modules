/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:04:02 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/18 17:00:43 by paugonca         ###   ########.fr       */
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

		int					getRawBits(void) const;
		void				setRawBits(int const &raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		// Comparison operators overload
		Fixed				&operator=(Fixed const &rhs);
		Fixed				&operator>(Fixed const &rhs);
		Fixed				&operator<(Fixed const &rhs);
		Fixed				&operator>=(Fixed const &rhs);
		Fixed				&operator<=(Fixed const &rhs);
		Fixed				&operator==(Fixed const &rhs);
		Fixed				&operator!=(Fixed const &rhs);

		// Arithmetic operators overload
		Fixed				&operator+(Fixed const &rhs);
		Fixed				&operator-(Fixed const &rhs);
		Fixed				&operator*(Fixed const &rhs);
		Fixed				&operator/(Fixed const &rhs);

		// Increment/decrement operators overload
		Fixed				&operator++(void);
		Fixed				&operator++(int);
		Fixed				&operator--(void);
		Fixed				&operator--(int);

		//Overloaded member functions
		static Fixed		&min(Fixed &num1, Fixed &num2);
		static Fixed		&min(Fixed const &num1, Fixed const &num2);
		static Fixed		&max(Fixed &num1, Fixed &num2);
		static Fixed		&max(Fixed const &num1, Fixed const &num2);

	private:
		int	_num;
		static int const	_frac_bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:33 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 13:01:03 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class	ScalarConverter
{
	public:
		ScalarConverter(void);
		~ScalarConverter(void);

		static void		converter(const std::string &in);

	private:
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter	&operator=(const ScalarConverter &rhs);
};

typedef enum	e_scalar_type
{
	e_char,
	e_int,
	e_float,
	e_double,
	e_invalid
}	t_scalar_type;

// conversion_utils.cpp
t_scalar_type	get_ScalarType(const std::string &in);
void			conv2int(const std::string &in);
void			conv2char(const std::string &in);
void			conv2float(const std::string &in);
void			conv2double(const std::string &in);

#endif

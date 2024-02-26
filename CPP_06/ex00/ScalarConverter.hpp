/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:33 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/26 16:41:34 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

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

int		checkType(const std::string &in);

void	conv2int(const std::string &in);
void	conv2char(const std::string &in);
void	conv2float(const std::string &in);
void	conv2double(const std::string &in);

#endif

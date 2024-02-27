/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:46:06 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/27 16:46:08 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>

static bool	is_all_digits(const std::string &in)
{
	if (!in.length())
		return (false);
	for (int i = 0; i < in.length(); i++)
		if (!isdigit(in[i]))
			return (false);
	return (true);
}

static bool	is_float(const std::string &in)
{
	int	dot = 0;
	int	minus = 0;
	int	plus = 0;
	int	f = 0;

	for (int i = 0; i < in.length(); i++)
	{
		if (in[i] == '.')
			dot++;
		else if (in[i] == '-')
			minus++;
		else if (in[i] == '+')
			plus++;
		else if (in[i] == 'f')
			f++;
	}
	if (dot != 1 || minus > 1 || plus > 1 || f != 1)
		return (false);

	int	dot_idx = in.find('.');
	int	sign = minus || plus;
	if (is_all_digits(in.substr(sign, dot_idx - sign)))
		if (is_all_digits(in.substr(dot_idx + 1, in.length() - dot_idx - 2)))
			return (true);

	return (false);
}

static bool	is_double(const std::string &in)
{
	int	dot = 0;
	int	minus = 0;
	int	plus = 0;

	for (int i = 0; i < in.length(); i++)
	{
		if (in[i] == '.')
			dot++;
		else if (in[i] == '-')
			minus++;
		else if (in[i] == '+')
			plus++;
	}
	if (dot != 1 || minus > 1 || plus > 1)
		return (false);

	int	dot_idx = in.find('.');
	int	sign = minus || plus;
	if (is_all_digits(in.substr(sign, dot_idx - sign)))
		if (is_all_digits(in.substr(dot_idx + 1, in.length() - dot_idx - 1)))
			return (true);

	return (false);
}

t_scalar_type	getScalarType(const std::string &in)
{
	if (!isdigit(in[0]) && in.length() == 1)
		return (e_char);
	else if (is_all_digits(in) || ((in[0] == '-' || in[0] == '+') \
	&& is_all_digits(in.substr(1, in.length() - 1))))
		return (e_int);
	else if (is_float(in) || in == "nanf" || in == "+inff" || in == "-inff")
		return (e_float);
	else if (is_double(in) || in == "nan" || in == "+inf" || in == "-inf")
		return (e_double);
	return (e_invalid);
}

void	conv2char(const std::string &in)
{
	char	tmp = in[0];

	std::cout << "char: '" << tmp << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) \
	<< static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) \
	<< static_cast<double>(tmp) << std::endl;
}

void	conv2int(const std::string &in)
{
	long int	tmp1 = strtol(in.c_str(), NULL, 10);
	if (tmp1 < INT_MIN || tmp1 > INT_MAX)
	{
		std::cout << "Error: integer overflow" << std::endl;
		return;
	}

	int			tmp2 = atoi(in.c_str());
	std::cout << "char :";
	if (tmp2 < CHAR_MIN || tmp2 > CHAR_MAX)
		std::cout << "impossible" << std::endl;
}

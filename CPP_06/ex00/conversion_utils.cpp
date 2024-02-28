/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:46:06 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 14:20:24 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

static bool	is_all_digits(const std::string &in)
{
	if (!in.length())
		return (false);
	for (size_t i = 0; i < in.length(); i++)
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

	for (size_t i = 0; i < in.length(); i++)
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

	for (size_t i = 0; i < in.length(); i++)
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

t_scalar_type	get_ScalarType(const std::string &in)
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

	std::cout << "char: '" << tmp << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) \
	<< static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) \
	<< static_cast<double>(tmp) << std::endl;
}

void	conv2int(const std::string &in)
{
	long int	tmp = strtol(in.c_str(), NULL, 10);
	if (tmp < std::numeric_limits<int>::min() || \
	tmp > std::numeric_limits<int>::max())
	{
		std::cout << "Error: integer overflow" << std::endl;
		return;
	}

	int			num = atoi(in.c_str());
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() \
	|| num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) \
	<< static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) \
	<< static_cast<double>(num) << std::endl;
}

void	conv2float(const std::string &in)
{
	if (in == "nanf" || in == "+inff" || in == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (in == "nanf")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		} 
		else
		{
			std::cout << "float: " << (in == "-inff" ? "-inff" : "+inff") << std::endl;
			std::cout << "double: " << (in == "-inf" ? "-inf" : "+inf") << std::endl;
		}
		 return;
	}

	double	tmp = strtod(in.c_str(), NULL);
	if (tmp < std::numeric_limits<float>::min() || \
	tmp > std::numeric_limits<float>::max())
	{
		std::cout << "Error: float overflow" << std::endl;
		return;
	}

	float	num = strtof(in.c_str(), NULL);
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() \
	|| num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (static_cast<int>(num) < std::numeric_limits<int>::min() || \
	static_cast<int>(num) > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	if (in.find(".0f"))
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << num \
		<< "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << \
		static_cast<double>(num) << std::endl;
	}
	else
	{
		std::cout << "float: " << num << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
	}
}

void	conv2double(const std::string &in)
{
	if (in == "nan" || in == "+inf" || in == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (in == "nan")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else
		{
			std::cout << "float: " << (in == "-inf" ? "-inff" : "+inff") << std::endl;
			std::cout << "double: " << (in == "-inf" ? "-inf" : "+inf") << std::endl;
		}
		return;
	}

	long double	tmp = strtold(in.c_str(), NULL);
	if (tmp < std::numeric_limits<double>::min() || \
	tmp > std::numeric_limits<double>::max())
	{
		std::cout << "Error: double overflow" << std::endl;
		return;
	}

	double		num = strtod(in.c_str(), NULL);
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() \
	|| num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (num < std::numeric_limits<int>::min() || \
	num > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	std::cout << "float: ";
	if (num < std::numeric_limits<float>::min() || \
	num > std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) \
		<< static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << num << std::endl;
}

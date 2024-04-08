/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:23:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/04/08 11:48:45 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void	read_database(std::map<std::string, float> &db)
{
	std::ifstream	data("data.csv");
	if (!data.is_open())
	{
		std::cout << "Error: failed to read from data.csv" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string		key, line, tmp;
	while (true)
	{
		std::getline(data, line);
		if (line.empty())
			break;
		key = line.substr(0, line.find(','));
		tmp = line.substr(line.find(',') + 1);
		db[key] = strtof(tmp.c_str(), NULL);
	}
}

static bool	str_isnum(std::string str)
{
	if (std::count(str.begin(), str.end(), '.') > 1)
		return (false);
	for (size_t i = 0; i < str.size(); i++)
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-')
			return (false);
	return (true);
}

static bool	is_valid_value(float value)
{
	if (value < 0 || value >= 1000)
		return (false);
	return (true);
}

static void	parse_date(std::string date, std::string &year, std::string &month, std::string &day)
{
	std::string			token;
	std::stringstream	tmp(date);

	for (int i = 0; i < 3; i++)
	{
		std::getline(tmp, token, '-');
		switch (i)
		{
			case 0:
				year = token;
				break;
			case 1:
				month = token;
				break;
			case 2:
				day = token;
		}
	}
}

static bool	is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

static bool	is_valid_date(std::string date)
{
	std::string	year_str, month_str, day_str;
	if (std::count(date.begin(), date.end(), '-') != 2)
		return (false);
	parse_date(date, year_str, month_str, day_str);
	if (year_str.empty() || month_str.empty() || day_str.empty())
		return (false);
	if (!str_isnum(year_str) || !str_isnum(month_str) || !str_isnum(day_str))
		return (false);

	int			year = atoi(year_str.c_str());
	int			month = atoi(month_str.c_str());
	int			day = atoi(day_str.c_str());
	if (year < 0  || month < 0 || day < 0)
		return (false);
	else if (month < 1 || month > 12)
		return (false);
	// Bitcoin was released in 2009. As such, any year lower than that is invalid.
	else if (year < 2009)
		return (false);

	int			daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int			max_day = daysPerMonth[month];
	if (month == 2 && is_leap_year(year))
		max_day++;
	return (day <= max_day);
}

static bool	is_valid_line(std::string line)
{
	if (std::count(line.begin(), line.end(), '|') != 1 || line.find('|') != 11 \
	|| line[line.size() - 1] == '|')
	{
		std::cout << "Error: bad input =>";
		return (false);
	}

	std::string	key = line.substr(0, line.find('|') - 1);
	if (key.empty())
	{
		std::cout << "Error: bad input =>";
		return (false);
	}
	std::string	value = line.substr(line.find('|') + 2);
	if (!str_isnum(value))
	{
		std::cout << "Error: value is not a number =>";
		return (false);
	}
	else if (!is_valid_value(std::strtof(value.c_str(), NULL)))
	{
		std::cout << "Error: negative or too large value =>";
		return (false);
	}
	else if (!is_valid_date(key))
	{
		std::cout << "Error: invalid date =>";
		return (false);
	}
	return (true);
}

std::string	get_conv_date(std::string key, std::map<std::string, float> &db)
{
	std::string	last, month, day;

	parse_date(key, last, month, day);
	for (std::map<std::string, float>::iterator i = db.begin(); i != db.end(); i++)
	{
		if (key == i->first)
			return (i->first);
		if (i->first.compare(key) > 0)
			return (last);
		last = i->first;
	}
	return (last);
}

static void	conv_btc(std::string key, float value, std::map<std::string, float> &db)
{
	float	res = db[get_conv_date(key, db)];
	std::cout << key << " => " << value << " * " << res << " = " << value * res \
	<< std::endl;
}

int	parse_input(std::string in)
{
	std::string						key, line, value;
	std::ifstream					infile(in.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: failed to read from " << in << std::endl;
		return (EXIT_FAILURE);
	}

	std::map<std::string, float>	db;
	read_database(db);
	while (true)
	{
		std::getline(infile, line);
		if ((line.empty() && !infile.eof()) || !line.compare("date | value"))
			continue;
		else if (line.empty())
			break;
		if (is_valid_line(line))
		{
			key = line.substr(0, line.find('|') - 1);
			value = line.substr(line.find('|') + 1);
			if (key.empty() || line.empty())
				std::cerr << "Error: bad input" << std::endl;
			conv_btc(key, std::strtof(value.c_str(), NULL), db);
		}
		else
			std::cout << " " << line << std::endl;
	}

	return (EXIT_SUCCESS);
}

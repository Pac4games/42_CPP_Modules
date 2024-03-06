/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:23:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/06 17:55:54 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

static void	read_database(std::map<std::string, float> &db)
{
	std::ifstream	data("data.csv");
	if (!data.is_open())
	{
		std::cout << "Error: failed to read from data.csv" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string		key;
	std::string		line;
	std::string		tmp;

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

static bool	str_isnum(const std::string str)
{
	if (std::count(str.begin(), str.end(), '.') > 1)
		return (false);
	for (int i = 0; i < str.size(); i++)
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

static void	parse_date(const std::string date, std::string &year, std::string &month, std::string &day)
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

static bool	is_valid_date(const std::string date)
{
	std::string	year;
	std::string month;
	std::string day;

	if (std::count(date.begin(), date.end(), '-') != 2)
		return (false);
	parse_date(date, year, month, day);
	if (year.empty() || month.empty() || day.empty())
		return (false);
}

static bool	is_valid_line(const std::string line)
{
	if (std::count(line.begin(), line.end(), "|") != 1)
	{
		std::cout << "Error: bad input => ";
		return (false);
	}

	std::string	key = line.substr(0, line.find('|') - 1);
	std::string	value = line.substr(line.find('|') + 2);
	if (!str_isnum(value))
	{
		std::cout << "Error: value is not a number => ";
		return (false);
	}
	if (!is_valid_value(std::strtof(value.c_str(), NULL)))
	{
		std::cout << "Error: negative or too large value => ";
		return (false);
	}
	
}

void	read_input(const std::string &in)
{
	std::string						key;
	std::string						line;
	std::string						value;
	std::ifstream					infile(in.c_str());
	if (!infile.is_open())
	{
		std::cout << "Error: failed to read from " << in << std::endl;
		exit(EXIT_FAILURE);
	}

	std::map<std::string, float>	db;
	read_database(db);
	while (true)
	{
		std::getline(infile, line);
		if (line.empty())
			break;
		if (!line.compare("date | value"))
			continue;
	}
}

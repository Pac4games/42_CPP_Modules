/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:36:29 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/17 12:05:16 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
//	std::cout << "Harl constructor called" << std::endl;
	actionLevel[0] = "DEBUG";
	actionLevel[1] = "INFO";
	actionLevel[2] = "WARNING";
	actionLevel[3] = "ERROR";
}

Harl::~Harl(void)
{
//	std::cout << "Harl destructor called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup " \
	<< "burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put " \
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for " \
	<< "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = -1;

	while (++i < 4)
		if (this->actionLevel[i] == level)
			break;
	switch (i)
	{
		case (0):
			this->debug();
			// fallthrough
		case (1):
			this->info();
			// fallthrough
		case (2):
			this->warning();
			// fallthrough
		case (3):
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

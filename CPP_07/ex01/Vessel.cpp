/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vessel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:18:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/04 12:54:36 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vessel.hpp"

Vessel::Vessel(void)
{
//	std::cout << "Vessel default constructor called" << std::endl;
}

Vessel::Vessel(const std::string &name, const int hp, const int atk, const int def) : _name(name), _hp(hp), _atk(atk), _def(def)
{
//	std::cout << "Vessel constructor for " << name << " called" << std::endl;
}

Vessel::Vessel(const Vessel &src)
{
//	std::cout << "Vessel copy constructor called" << std::endl;
	*this = src;
}

Vessel::~Vessel(void)
{
//	std::cout << "Vessel destructor called" << std::endl;
}

Vessel	&Vessel::operator=(const Vessel &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_atk = rhs._atk;
		this->_def = rhs._def;
	}
	return (*this);
}

std::string	Vessel::getName(void) const
{
	return (this->_name);
}

int	Vessel::getHP(void) const
{
	return (this->_hp);
}

int	Vessel::getATK(void) const
{
	return (this->_atk);
}

int	Vessel::getDEF(void) const
{
	return (this->_def);
}

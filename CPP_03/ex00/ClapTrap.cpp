/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:05:04 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/25 17:19:21 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "Constructor of ClapTrap " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_ep = rhs._ep;
		this->_atk = rhs._atk;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		this->_ep--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
		std::cout << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hp -= amount;
		std::cout << this->_name << " was hit and lost " << amount \
		<< "health points!" << std::endl;
		if (this->_hp == 0)
			std::cout << this->_name << " died!" << std::endl;
	}
}

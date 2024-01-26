/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:05:04 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/26 13:01:16 by paugonca         ###   ########.fr       */
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
		std::cout << this->_name << " attacks " << target << ", dealing " \
		<< this->_atk << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " tried to attack " << target \
		<< " but it's out of energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
		std::cout << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hp -= amount;
		std::cout << this->_name << " was hit and lost " << amount \
		<< " health points!" << std::endl;
		if (this->_hp == 0)
			std::cout << this->_name << " died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		this->_ep--;
		this->_hp += amount;
		std::cout << this->_name << " repairs itself, restoring " \
		<< amount << " hit points" << std::endl;
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_name << " tried to repair itself but is already dead..." \
		<< std::endl;
	}
	else
		std::cout << this->_name << " tried to repair itself but it's out of energy" \
		<< std::endl;
}

void	ClapTrap::check(void)
{
	std::cout << std::endl << "* " << this->_name << ":" << std::endl;
	std::cout << "Health: " << this->_hp << std::endl;
	std::cout << "Energy: " << this->_ep << std::endl << std::endl;
}

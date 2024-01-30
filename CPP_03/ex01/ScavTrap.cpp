/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:37:22 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 15:06:57 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_atk = 20;
	std::cout << "ScavTrap constructor for " << this->_name << " called" \
	<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_ep = rhs._ep;
		this->_atk = rhs._atk;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_ep > 0)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target \
		<< ", dealing " << this->_atk << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " tried to attack " << target \
		<< " but it's out of energy" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_ep > 0)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode" \
		<< std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name \
		<< " attempted to enter Gate keeper mode, but failed! (out of energy)" \
		<< std::endl;
}

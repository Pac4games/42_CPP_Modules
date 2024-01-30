/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:49:12 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 16:52:28 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor for " << name << " called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_atk = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_ep = rhs._ep;
		this->_atk = rhs._atk;
	}
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_ep > 0)
	{
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " attacks " << target \
		<< ", dealing " << this->_atk << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " tried to attack " << target \
		<< " but it's out of energy" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " high-fived the air!" \
		<< std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name \
		<< " high-fived... himself in the face (out of energy)" << std::endl;
}

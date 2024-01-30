/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:48:08 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 18:56:58 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), \
ScavTrap(name), FragTrap(name)
{
	
}

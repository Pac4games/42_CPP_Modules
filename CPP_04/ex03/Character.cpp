/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:34:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/07 14:56:13 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : ICharacter(), _name("Noelle")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete inventory[i];
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete inventory[i];
			inventory[i] = rhs.inventory[i]->clone();
		}
	return (*this);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (m == 0)
	{
		std::cout << "Tried to equip empty materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4 && m != NULL; i++)
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return;
		}
	std::cout << "Inventory full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid inventory slot (non-existent index)" << std::endl;
		return;
	}
	else if (this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
	else
		std::cout << "Slot already empty" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid Materia selected" << std::endl;
		return;
	}
	else if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}

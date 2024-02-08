/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:05:19 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/08 11:56:50 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->materias[i] != NULL)
			delete this->materias[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			delete this->materias[i];
		this->materias[i] = rhs.materias[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4 && m != NULL; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			std::cout << "Learned " << m->getType() << " materia!" << std::endl;
			return;
		}
		if (i == 3)
		{
			std::cout << "Can't learn new materia, all slots are full" << std::endl;
			delete m;
		}
	}
	if (m == NULL)
		std::cout << "Can't learn non-existent materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	std::cout << "Invalid or unknown materia type" << std::endl;
	return (NULL);
}

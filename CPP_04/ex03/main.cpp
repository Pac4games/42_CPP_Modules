/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:19:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/12 13:11:59 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <cstdlib>

int	main(void)
{
	IMateriaSource	*src1 = new MateriaSource();
	AMateria		*test = NULL;
	src1->learnMateria(test);
	for (int i = 0; i < 5; i++)
		if (i % 2 == 0)
			src1->learnMateria(new Ice());
		else
			src1->learnMateria(new Cure());

	IMateriaSource	*src2 = new MateriaSource(*(MateriaSource *)src1);
	ICharacter		*vessel = new Character("Noelle");
	vessel->equip(src2->createMateria("ice"));
	vessel->equip(src2->createMateria("cure"));
	vessel->equip(src2->createMateria("ice"));
	vessel->equip(src2->createMateria("snowgrave"));
	vessel->equip(src2->createMateria("cure"));

	ICharacter		*berdly = new Character("Berdly");
	ICharacter		*noelle = new Character(*(Character *)vessel);
	std::cout << "Materia slot 0:" << std::endl;
	noelle->use(0, *berdly);
	std::cout << "Materia slot 1:" << std::endl;
	noelle->use(1, *berdly);
	std::cout << "Materia slot 2:" << std::endl;
	noelle->use(2, *berdly);
	std::cout << "Materia slot 3:" << std::endl;
	noelle->use(3, *berdly);
	std::cout << "Materia slot 4 (non-existent):" << std::endl;
	noelle->use(4, *berdly);
	std::cout << std::endl;

	delete src1;
	delete src2;
	delete vessel;
	delete berdly;
	delete noelle;

	return (EXIT_SUCCESS);
}

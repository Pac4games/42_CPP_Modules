/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:16:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/13 15:34:57 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <iostream>

class	Vessel
{
	public:
		Vessel(void);
		Vessel(const std::string &name, const int hp, const int atk, const int def);
		Vessel(const Vessel &src);
		~Vessel(void);
		Vessel		&operator=(const Vessel &rhs);

		std::string	getName(void) const;
		int			getHP(void) const;
		int			getATK(void) const;
		int			getDEF(void) const;

	private:
		std::string	_name;
		int			_hp;
		int		_atk;
		int		_def;
};

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

static void	check_stats(const Vessel &vessel)
{
	std::cout << "* " << vessel.getName() << std::endl;
	std::cout << "HP " << vessel.getHP() << " ATK " << vessel.getATK() << " DEF " \
	<< vessel.getDEF() << std::endl;
}

int	main(void)
{
	try
	{
		Array<int>		arr1(5);
		for (int i = 0; i < 5; i++)
		{
			arr1[i] = i;
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl << "int array size: " << arr1.size() \
		<< std::endl << std::endl;

		Array<char>		arr2(7);
		for (int i = 0; i < 7; i++)
		{
			arr2[i] = i + 'a';
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl << "char array size: " << arr2.size() \
		<< std::endl << std::endl;

		Array<Vessel>	arr3(3);
		std::string		names[3] = {"Kris", "Susie", "Ralsei"};
		int				hps[3] = {90, 110, 70};
		int				atks[3] = {10, 14, 8};
		int				defs[3] = {2, 2, 2};
		for (int i = 0; i < 3; i++)
		{
			arr3[i] = Vessel(names[i], hps[i], atks[i], defs[i]);
			check_stats(arr3[i]);
		}
		std::cout << "Vessel array size: " << arr3.size() << std::endl << std::endl;

		std::cout << "Invalid tests:" << std::endl;
			std::cout << arr2[-1] << std::endl;
			std::cout << arr1[42] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}

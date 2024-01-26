/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:01:54 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/26 12:25:28 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);						//Cannonical form
		ClapTrap(ClapTrap const &src);		//Cannonical form
		ClapTrap(std::string const &name);
		~ClapTrap(void);					//Cannonical form

		ClapTrap		&operator=(ClapTrap const &rhs);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			check(void);

	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_atk;
};

#endif

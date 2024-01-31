/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:01:54 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/31 11:55:28 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

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
		int				_hp;
		int				_ep;
		int				_atk;
};

#endif

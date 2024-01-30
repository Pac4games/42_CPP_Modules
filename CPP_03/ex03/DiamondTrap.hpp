/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:32:07 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/30 18:47:55 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string name);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &rhs);

		void		attack(std::string const &target);
		void		whoAmI(void);
};

#endif

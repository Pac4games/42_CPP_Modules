/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:23:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/07 14:35:18 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character(void);
		Character					&operator=(Character const &rhs);

		virtual const std::string	&getName(void) const;
		virtual	void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

	private:
		const std::string			_name;
		AMateria					*inventory[4];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:41:05 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/16 09:55:12 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string	&getType(void);
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif

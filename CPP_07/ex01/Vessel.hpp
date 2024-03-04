/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vessel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:11:00 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/04 12:54:45 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VESSEL_HPP
# define VESSEL_HPP

# include <string>
# include <iostream>

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

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:49:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/05 11:42:33 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void		announce(void);
		void		setName(std::string name);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif

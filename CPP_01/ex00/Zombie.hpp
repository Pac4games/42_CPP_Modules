/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:49:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/15 15:58:33 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void);

	private:
		std::string	_name;
};

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);		

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:54:20 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/17 11:18:42 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);

	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		std::string	actionLevel[4];
};

#endif

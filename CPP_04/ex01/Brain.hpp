/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:48:18 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 17:59:21 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <fstream>
class	Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		virtual ~Brain(void);
		Brain		&operator=(Brain const &rhs);

		std::string	ideas[100];
};

#endif

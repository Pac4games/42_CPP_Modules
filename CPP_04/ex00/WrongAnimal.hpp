/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:55:15 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 13:01:06 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &rhs);

		void		makeSound(void) const;
		std::string	get_type(void) const;

	protected:
		std::string	_type;
};

#endif

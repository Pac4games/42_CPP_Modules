/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:25:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 12:45:26 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);
		Animal				&operator=(Animal const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	get_type(void) const;

	protected:
		std::string			_type;
};

#endif

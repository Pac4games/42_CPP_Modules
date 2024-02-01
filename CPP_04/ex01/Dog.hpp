/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:15:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 12:45:48 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);
		Dog					&operator=(Dog const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	get_type(void) const;
};

#endif

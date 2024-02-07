/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:15:41 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/02 13:02:06 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog(void);
		Dog					&operator=(Dog const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	get_type(void) const;
		std::string			&get_idea(int i) const;
		void				set_idea(int i, std::string const &idea);
	
	private:
		Brain				*_brain;
};

#endif

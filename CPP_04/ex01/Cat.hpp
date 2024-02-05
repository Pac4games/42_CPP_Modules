/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:39:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/02 13:02:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);
		Cat					&operator=(Cat const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	get_type(void) const;
		std::string			&get_idea(int i) const;
		void				set_idea(int i, std::string const &idea);

	private:
		Brain				*_brain;
};

#endif

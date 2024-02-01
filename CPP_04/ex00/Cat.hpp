/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:39:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/01 12:46:35 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat(void);
		Cat					&operator=(Cat const &rhs);

		virtual void		makeSound(void) const;
		virtual std::string	get_type(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:07:49 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/08 12:16:54 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);

	private:
		Ice			&operator=(Ice const &rhs);
};

#endif

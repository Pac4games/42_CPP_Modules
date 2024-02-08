/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:47:20 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/08 12:11:14 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);

	private:
		Cure		&operator=(Cure const &rhs);
};

#endif

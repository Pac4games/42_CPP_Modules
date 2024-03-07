/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:27 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/07 14:42:38 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class	Serializer
{
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);

	private:
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer &src);
		Serializer			&operator=(const Serializer &rhs);
};

#endif

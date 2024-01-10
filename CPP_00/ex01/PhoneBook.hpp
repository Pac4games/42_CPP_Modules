/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:48 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/10 16:47:07 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	putstr(std::string str) const;
		void	search(void) const;

	private:
		Contact	contact[8];
};

#endif

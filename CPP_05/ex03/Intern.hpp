/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:56:19 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/23 15:23:27 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		~Intern(void);

		AForm	*makeForm(const std::string &name, const std::string &target);

		class	WrongFormNameException : public std::exception
		{
			virtual const char	*what() const throw();
		};

	private:
		Intern(const Intern &src);
		Intern	&operator=(const Intern &rhs);
};

enum
{
	shrubbery,
	robotomy,
	presidential
};

#endif

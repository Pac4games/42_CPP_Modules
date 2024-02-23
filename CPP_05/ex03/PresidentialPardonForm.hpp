/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:33:16 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 16:37:56 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

		virtual std::string		getTarget(void) const;
		virtual void			setTarget(const std::string &target);

		virtual void			execute(const Bureaucrat &bureaucrat) const;

	class	PresidentialBureaucratGradeException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	PresidentialFormNotSignedException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	private:
		PresidentialPardonForm(void);
		std::string				_target;
};

#endif

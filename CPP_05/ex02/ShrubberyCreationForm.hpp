/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:04 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 12:18:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <time.h>
# include <cstdlib>

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

		virtual std::string		getTarget(void) const;
		virtual void			setTarget(const std::string &target);

		virtual void			execute(const Bureaucrat &bureaucrat) const;

		class	ShrubberyFileExcpetion : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	ShrubberyBureaucratGradeException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	ShrubberyFormNotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		ShrubberyCreationForm(void);
		std::string				_target;
};

#endif

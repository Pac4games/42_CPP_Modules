/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:21:00 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 16:26:13 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <time.h>

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &rhs);

		virtual std::string		getTarget(void) const;
		virtual void			setTarget(const std::string &target);

		virtual void			execute(const Bureaucrat &bureaucrat) const;

		class	RobotomyBureaucratGradeException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	RobotomyFormNotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		RobotomyRequestForm(void);
		std::string				_target;
};

#endif

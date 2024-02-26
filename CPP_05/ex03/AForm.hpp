/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:09:35 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/26 12:31:59 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class	AForm
{
	public:
		AForm(const std::string &name, int to_sign, int to_exec);
		AForm(const AForm &src);
		virtual ~AForm(void);
		AForm				&operator=(const AForm &rhs);

		const std::string	&getName(void) const;
		const unsigned int	&getGradeToSign(void) const;
		const unsigned int	&getGradeToExec(void) const;
		bool				isSigned(void) const;
		void				setIsSigned(const bool &is_signed);
		virtual std::string	getTarget(void) const = 0;
		virtual void		setTarget(const std::string &target) = 0;

		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &bureaucrat) const = 0;

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		AForm(void);
		const std::string	_name;
		const unsigned int	_grade2sign;
		const unsigned int	_grade2exec;
		bool				_is_signed;
};

std::ostream	&operator<<(std::ostream &o, const AForm &src);

#endif

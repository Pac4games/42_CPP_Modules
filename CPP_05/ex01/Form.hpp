/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:16:00 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/20 11:52:44 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(const Form &src);
		Form(const std::string &name, int to_sign, int to_exec);
		~Form(void);
		Form				&operator=(const Form &rhs);

		const std::string	&getName(void) const;
		const unsigned int	&getGradeToSign(void) const;
		const unsigned int	&getGradeToExec(void) const;
		bool				isGradeSigned(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		Form(void);
		const std::string	_name;
		const unsigned int	_grade2sign;
		const unsigned int	_grade2exec;
		bool				_is_signed;
};

std::ostream	&operator<<(std::ostream &o, const Form &src);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:34 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/21 16:42:34 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class	Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string &name, const unsigned int &grade);
		~Bureaucrat(void);
		Bureaucrat			&operator=(const Bureaucrat &rhs);

		const std::string	&getName(void) const;
		unsigned int		getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		Bureaucrat(void);
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream				&operator<<(std::ostream &o, const Bureaucrat &src);

#endif

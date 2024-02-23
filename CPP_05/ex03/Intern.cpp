/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:08:05 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/23 15:26:41 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
//	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
//	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
//	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	int			idx = -1;
	std::string	options[3] = {"shrubbery request", "robotomy request", \
	"presidential request"};

	while (++idx < 3)
		if (options[idx] == name)
			break;

	AForm		*res;
	switch (idx)
	{
		case shrubbery:
			res = new ShrubberyCreationForm(target);
			break;
		case robotomy:
			res = new RobotomyRequestForm(target);
			break;
		case presidential:
			res = new PresidentialPardonForm(target);
			break;
		default:
			throw WrongFormNameException();
	}

	std::cout << "Intern creates " << *res << std::endl;
	return (res);
}

const char	*Intern::WrongFormNameException::what() const throw()
{
	return ("Exception: Intern failed to create form (invalid form name)");
}

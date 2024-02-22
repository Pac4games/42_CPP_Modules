/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:38:11 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 16:50:29 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
//	std::cout << "Default Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
//	std::cout << "Presidential constructor for target " << target << " called " \
//	<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
//	std::cout << "Presidential copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
//	std::cout << "Presidential destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::setTarget(const std::string &target)
{
	this->_target = target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (this->isSigned() && this->getGradeToExec() > bureaucrat.getGrade())
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else if (this->isSigned())
		throw PresidentialBureaucratGradeException();
	else
		throw PresidentialFormNotSignedException();
}

const char	*PresidentialPardonForm::PresidentialBureaucratGradeException::what() const throw()
{
	return ("Exception: failed to execute Presidential form (Bureaucrat grade too low)");
}

const char	*PresidentialPardonForm::PresidentialFormNotSignedException::what() const throw()
{
	return ("Exception: failed to execute Presidential form (form not signed)");
}

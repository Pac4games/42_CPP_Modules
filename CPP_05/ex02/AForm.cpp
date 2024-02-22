/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:31:04 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 12:40:42 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _grade2sign(0), _grade2exec(0)
{
//	std:cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int to_sign, int to_exec) : _name(name), _grade2sign(to_sign), _grade2exec(to_exec)
{
//	std::cout << "AForm constructor for " << name << " called" << std::endl;
	if (to_sign > 150 || to_exec > 150)
		throw GradeTooLowException();
	else if (to_sign <= 0 || to_exec <= 0)
		throw GradeTooHighException();
	_is_signed = false;
}

AForm::AForm(const AForm &src) : _name(src._name), _grade2sign(src._grade2sign), _grade2exec(src._grade2exec)
{
//	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
}

AForm::~AForm(void)
{
//	std::cout << "AForm destructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_is_signed = rhs._is_signed;
	return (*this);
}

const std::string	&AForm::getName(void) const
{
	return (this->_name);
}

const unsigned int	&AForm::getGradeToSign(void) const
{
	return (this->_grade2sign);
}

const unsigned int	&AForm::getGradeToExec(void) const
{
	return (this->_grade2exec);
}

bool	AForm::isSigned(void) const
{
	return (this->_is_signed);
}

void	AForm::setIsSigned(const bool &is_signed)
{
	this->_is_signed = is_signed;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->_is_signed == false)
	{
		if (bureaucrat.getGrade() >= this->_grade2sign)
		{
			bureaucrat.signForm(*this);
			throw GradeTooLowException();
		}
		else
		{
			bureaucrat.signForm(*this);
			this->_is_signed = true;
		}
	}
	else
		bureaucrat.signForm(*this);
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Exception: grade too low");
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Exception: grade too high");
}

std::ostream	&operator<<(std::ostream &o, AForm const &src)
{
	o << src.getName() << ", form with required grade " << src.getGradeToSign() \
	<< " to sign, and required grade " << src.getGradeToExec() << " to execute ";
	if (src.isSigned())
		o << "is signed";
	else
		o << "is not signed";

	return (o);
}

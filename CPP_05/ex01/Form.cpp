/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:28:21 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/20 12:49:25 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _grade2sign(0), _grade2exec(0)
{
//	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int to_sign, int to_exec) : _name(name), _grade2sign(to_sign), _grade2exec(to_exec)
{
//	std::cout << "Constructor of " << name << " form called" << std::endl;
	if (to_sign > 150 || to_exec > 150)
		throw GradeTooLowException();
	else if (to_sign <= 0 || to_exec <= 0)
		throw GradeTooHighException();
	_is_signed = false;
}

Form::Form(const Form &src) : _name(src._name), _grade2sign(src._grade2sign), _grade2exec(src._grade2exec)
{
//	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form::~Form(void)
{
//	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_is_signed = rhs._is_signed;
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

const unsigned int	&Form::getGradeToSign(void) const
{
	return (this->_grade2sign);
}

const unsigned int	&Form::getGradeToExec(void) const
{
	return (this->_grade2exec);
}

bool	Form::isGradeSigned(void) const
{
	return (this->_is_signed);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
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

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Exception: grade too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Exception: grade too high");
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << ", form with required grade " << src.getGradeToSign() \
	<< " to sign, and required grade " << src.getGradeToExec() << " to execute ";
	if (src.isGradeSigned())
		o << "is signed";
	else
		o << "is not signed";

	return (o);
}

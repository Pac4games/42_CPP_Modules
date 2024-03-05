/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:23:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/04 15:22:18 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
//	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const unsigned int &grade) : _name(name)
{
//	std::cout << "Bureaucrat " << name  << " constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
//	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
//	std::cout << "Bureaucrat destructor called" << std::endl;
}


Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if ((this->_grade - 1) < 1)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
		throw GradeTooHighException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(const Form &form) const
{
	if (form.isSigned() == true || this->_grade >= form.getGradeToSign())
		std::cout << *this << " couldn't sign " << form.getName() \
		<< (form.isSigned() ? " because it's already signed" : " because his grade is too low") \
		<< std::endl;
	else
		std::cout << *this << " signed " << form.getName() << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (o);
}

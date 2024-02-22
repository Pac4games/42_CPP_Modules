/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:50:15 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 16:31:31 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
//	std::cout << "Robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
//	std::cout << "Robotomy constructor for target " << target << " called" \
//	<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
//	std::cout << "Robotomy copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
//	std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::setTarget(const std::string &target)
{
	this->_target = target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	if (this->isSigned() && this->getGradeToExec() > bureaucrat.getGrade())
	{
		std::cout << "* drilling noises *" << std::endl;
		std::srand(time(0));
		if (std::rand() % 2)
			std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Failed to robotomize " << this->_target;
	}
	else if (this->isSigned())
		throw RobotomyBureaucratGradeException();
	else
		throw RobotomyFormNotSignedException();
}

const char	*RobotomyRequestForm::RobotomyBureaucratGradeException::what() const throw()
{
	return ("Exception: failed to execute Robotomy form (Bureaucrat grade too low)");
}

const char	*RobotomyRequestForm::RobotomyFormNotSignedException::what() const throw()
{
	return ("Exception: failed to execute Robotomy form (form not signed)");
}

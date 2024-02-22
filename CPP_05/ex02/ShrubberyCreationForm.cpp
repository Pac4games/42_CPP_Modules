/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:00:49 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/22 12:54:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	//std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :  AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
//	std::cout << "Shrubbery constructor for target " << this->_target \
//	<< " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
//	std::cout << "Shrubbery copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
//	std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::setTarget(const std::string &target)
{
	this->_target = target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	if (this->isSigned() && bureaucrat.getGrade() < this->getGradeToExec())
	{
		int				tree_id;
		std::string		tmp(this->getTarget() + "_shrubbery");
		std::ifstream	infile;
		std::ofstream	outfile;

		outfile.open(tmp.c_str());
		if (!outfile.is_open())
			throw ShrubberyFileExcpetion();
		tmp.clear();

		// This function will "seed" the random number generation done by
		// std::rand(), allowing to get different random numbers on each run.
		// By providing it the time(0) function, we will always be generating a
		// different number based on the return value of the function, which in
		// this case is the number of seconds that have passed since the start
		// of the UNIX epoch (January 1st, 1970)
		std::srand(time(0));
		tree_id = std::rand() % 4;
		switch (tree_id)
		{
			case 0:
				tmp = "trees/tree1.txt";
				break;
			case 1:
				tmp = "trees/tree2.txt";
				break;
			case 2:
				tmp = "trees/tree3.txt";
				break;
			case 3:
				tmp = "trees/tree4.txt";
				break;
		}

		infile.open(tmp.c_str());
		if (!infile.is_open())
			throw ShrubberyFileExcpetion();
		tmp.clear();

		std::getline(infile, tmp, '\0');
		outfile.write(tmp.c_str(), tmp.size());
	}
	else if (this->isSigned())
		throw ShrubberyBureaucratGradeException();
	else
		throw ShrubberyFormNotSignedException();
}

const char	*ShrubberyCreationForm::ShrubberyFileExcpetion::what() const throw()
{
	return ("Exception: failed to open, write or read from input/output files");
}

const char	*ShrubberyCreationForm::ShrubberyBureaucratGradeException::what() const throw()
{
	return ("Exception: failed to execute Shrubbery form (Bureaucrat grade too low)");
}

const char	*ShrubberyCreationForm::ShrubberyFormNotSignedException::what() const throw()
{
	return ("Exception: failed to execute Shrubbery form (form not signed)");
}

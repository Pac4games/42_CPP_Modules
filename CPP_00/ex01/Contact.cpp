/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:17:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/11 15:01:53 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

int	Contact::num = 0;

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_dark_secret(void) const
{
	return (this->_dark_secret);
}

void	Contact::add(void)
{
	std::cout << std::endl;
	std::cout << "Insert the new contact's first name: ";
	std::getline(std::cin >> std::ws, this->_first_name);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Insert the new contact's last name:  ";
	std::getline(std::cin >> std::ws, this->_last_name);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Insert the new contact's nickname: ";
	std::getline(std::cin >> std::ws, this->_nickname);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Insert the new contact's phone number: ";
	std::getline(std::cin >> std::ws, this->_phone_number);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Insert the new contact's dark secret: ";
	std::getline(std::cin >> std::ws, this->_dark_secret);
	if (std::cin.eof() == 1)
		return;
	this->num++;
}

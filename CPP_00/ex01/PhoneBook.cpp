/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:44:39 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/11 15:15:23 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" 
#include <sstream>
#include <string>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::add(void)
{
	if (Contact::num >= 8)
		this->contact[Contact::num % 8].~Contact();
	this->contact[Contact::num % 8].add();
	return;
}

void	PhoneBook::putstr(std::string str) const
{
	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		str = str.substr(0, 9);
		str.push_back('.');
		std::cout << std::setw(10) << str;
	}
}

void	PhoneBook::search(void) const
{
	std::string	id;

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|  FIRST N.|   LAST N.|  NICKNAME|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (Contact::num >= 8)
		for (int i = 0; i < 8; i++)
		{
			id.push_back(i + 48);
			std::cout << "|";
			this->putstr(id);
			std::cout << "|";
			this->putstr(this->contact[i].get_first_name());
			std::cout << "|";
			this->putstr(this->contact[i].get_last_name());
			std::cout << "|";
			this->putstr(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}
	else
	{
		for (int i = 0; i < Contact::num; i++)
		{
			id.push_back(i + 48);
			std::cout << "|";
			this->putstr(id);
			std::cout << "|";
			this->putstr(this->contact[i].get_first_name());
			std::cout << "|";
			this->putstr(this->contact[i].get_last_name());
			std::cout << "|";
			this->putstr(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}
		std::cout << " -------------------------------------------" << std::endl;
	}

	if (!Contact::num)
	{
		std::cout << std::endl << "No contacts found." << std::endl;
		return;
	}

	int	index;
	do
	{
		std::cout << std::endl << "Please select a contact: ";
		std::cin >> std::ws >> id;
		std::cout << std::endl;
		std::istringstream(id) >> index;
		if (isdigit(id[0]) == false || id.size() > 1 || index >= 8 || index < 0 ||index >= Contact::num)
			std::cout << "Invalid contact, try again." << std::endl;
	} while (isdigit(id[0]) == false || id.size() > 1 || index >= 8 || index < 0 ||index >= Contact::num);

	std::cout << "First name: " << contact[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contact[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contact[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[index].get_phone_number() << std::endl;
	std::cout << "A dark secret: " << contact[index].get_dark_secret() << std::endl;

	return;
}

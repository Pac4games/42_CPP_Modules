/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:57:04 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/11 14:45:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb;
	std::string	input;

	do
	{
		std::cout << std::endl << "Welcome to your personal crappy awesome phonebook!" << std::endl << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "ADD - create a new contact" << std::endl;
		std::cout << "SEARCH - view registered contacts" << std::endl;
		std::cout << "EXIT - close the program" << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "Select a command to proceed: ";
		std::getline(std::cin >> std::ws, input);
		if (std::cin.eof() == 1)
			return (EXIT_FAILURE);
		if (input == "ADD")
			pb.add();
		else if (input == "SEARCH")
			pb.search();
	} while (input != "EXIT");

	return (EXIT_SUCCESS);
}

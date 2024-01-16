/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:23:03 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/16 10:41:59 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

static void	replaceString(std::string &content, const std::string &toFind, const std::string &toReplace)
{
	size_t	pos = content.find(toFind);

	while (pos != std::string::npos)
	{
		content.erase(pos, toFind.length());
		content.insert(pos, toReplace);
		pos = content.find(toFind, pos + toReplace.length());
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string			toFind = av[2];
		std::string			toReplace = av[3];
		std::ifstream		in_file(av[1]);

		if (toFind.empty() || toReplace.empty())
		{
			std::cerr << "Error: one or more empty arguments" << std::endl;
			return (EXIT_FAILURE);
		}
		if (!in_file)
		{
			std::cerr << "Error: failed to open " << av[1] << std::endl;
			return (EXIT_FAILURE);
		}
		std::ostringstream	buf;
		buf << in_file.rdbuf();
		in_file.close();
		std::string			content = buf.str();
		if (content.empty())
		{
			std::cerr << "Error: empty file" << std::endl;
			return (EXIT_FAILURE);
		}
		replaceString(content, toFind, toReplace);
		std::ofstream		outFile((std::string(av[1]) + ".replace").c_str());
		if (!outFile)
		{
			std::cerr << "Error: failed to create file" << std::endl;
			return (EXIT_FAILURE);
		}
		outFile << content;
		outFile.close();
		return (EXIT_SUCCESS);
	}
	std::cerr << "Error: invalid syntax" << std::endl;
	std::cerr << "Usage: ./replace <filename> <string to find> <string to replace>" << std::endl;
	return (EXIT_FAILURE);
}

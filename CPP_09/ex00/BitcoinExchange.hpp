/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:31:18 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/06 15:15:28 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

template <typename Keys, typename Value>
void	print_map(std::map<Keys, Value> container)
{
	for (typename std::map<Keys, Value>::iterator i = container.begin(); \
	i != container.end(); i++)
		std::cout << i->first << " " << i->second << std::endl;
}

#endif

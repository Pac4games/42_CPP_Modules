/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:50:23 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/18 13:35:57 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

// STL stands for Standard Template Library
// Here, the algorithm is std::find()
template <typename T>
typename T::iterator	easyfind(T &container, const int &to_find)
{
	typename T::iterator	occurence = std::find(container.begin(), container.end(), to_find);
	if (occurence != container.end())
		return (occurence);
	throw std::out_of_range("Exception: value not found");
}

#endif

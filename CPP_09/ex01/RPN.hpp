/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:12:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/08 13:04:22 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <cstdlib>
# include <cmath>
# include <cctype>
# include <algorithm>
# include <string>
# include <iostream>

void	print_err(std::string msg);
void	postfix(std::string in);

#endif

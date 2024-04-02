/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:12:30 by paugonca          #+#    #+#             */
/*   Updated: 2024/04/02 11:49:26 by paugonca         ###   ########.fr       */
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

int	print_err_ret(std::string msg);
int	postfix(std::string in);

#endif

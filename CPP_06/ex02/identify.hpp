/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:06:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 17:14:55 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>

class	Base
{
	public:
		virtual ~Base(void) {};
};

class	A : public Base{};
class	B : public Base{};
class	C : public Base{};

void	identify(Base &p);
void	identify(Base *p);

#endif

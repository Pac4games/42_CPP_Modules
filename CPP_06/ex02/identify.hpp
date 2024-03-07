/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:06:01 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/07 17:17:38 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>

class	Base
{
	public: virtual ~Base(void) {};
};

class	A : public Base
{
	public: A(void);
};

class	B : public Base
{
	public: B(void);
};

class	C : public Base
{
	public: C(void);
};

// utils.cpp 
void	identify(Base &p);
void	identify(Base *p);
Base	*randomize_class(void);

#endif

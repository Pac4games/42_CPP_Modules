/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:48:33 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/29 13:51:50 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"
#include <cstdlib>

int	main(void)
{
	Base	*tmp1 = randomize_class();
	Base	*tmp2 = randomize_class();
	Base	*tmp3 = randomize_class();

	identify(tmp1);
	identify(tmp2);
	identify(tmp3);
	identify(*tmp1);
	identify(*tmp2);
	identify(*tmp3);

	return (EXIT_SUCCESS);
}

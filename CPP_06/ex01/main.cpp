/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:29:31 by paugonca          #+#    #+#             */
/*   Updated: 2024/02/28 16:35:03 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	n1;
	Data	*p1;
	std::cout << n1.get_raw() << std::endl;
	p1 = Serializer::deserialize(Serializer::serialize(&n1));
	std::cout << p1->get_raw() << std::endl;

	Data	n2(42);
	Data	*p2;
	std::cout << n2.get_raw() << std::endl;
	p2 = Serializer::deserialize(Serializer::serialize(&n2));
	std::cout << p2->get_raw() << std::endl;

	Data	n3;
	Data	*p3;
	std::cout << n3.get_raw() << std::endl;
	p3 = Serializer::deserialize(Serializer::serialize(&n3));
	std::cout << p3->get_raw() << std::endl;
}

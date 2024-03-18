/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:40:27 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/18 12:40:46 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	//Subject tests
	MutantStack<int>								mstack1;

	mstack1.push(5);
	mstack1.push(17);

	std::cout << mstack1.top() << std::endl;
	mstack1.pop();
	std::cout << mstack1.size() << std::endl;

	mstack1.push(3);
	mstack1.push(5);
	mstack1.push(737);
	mstack1.push(0);

	MutantStack<int>::iterator						it1 = mstack1.begin();
	MutantStack<int>::iterator						ite1 = mstack1.end();

	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int>									s1(mstack1);

	//More tests
	std::cout << "-------------------------------------------" << std::endl;
	MutantStack<int, std::list<int> >				mstack2;

	mstack2.push(5);
	mstack2.push(17);

	std::cout << "Top: " << mstack2.top() << std::endl;
	std::cout << "Size: " << mstack2.size() << std::endl;
	mstack2.pop();
	std::cout << "Top: " << mstack2.top() << std::endl;
	std::cout << "Size: " << mstack2.size() << std::endl;

	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);

	MutantStack<int, std::list<int> >::iterator		it2 = mstack2.begin();
	MutantStack<int, std::list<int> >::iterator		ite2 = mstack2.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	std::cout << "-------------------------------------------" << std::endl;
	MutantStack<int, std::vector<int> >				mstack3;

	mstack3.push(5);
	mstack3.push(17);

	std::cout << "Top: " << mstack3.top() << std::endl;
	std::cout << "Size: " << mstack3.size() << std::endl;
	mstack3.pop();
	std::cout << "Top: " << mstack3.top() << std::endl;
	std::cout << "Size: " << mstack3.size() << std::endl;

	mstack3.push(3);
	mstack3.push(5);
	mstack3.push(737);
	mstack3.push(0);

	MutantStack<int, std::vector<int> >::iterator	it = mstack3.begin();
	MutantStack<int, std::vector<int> >::iterator	ite = mstack3.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return (EXIT_SUCCESS);
}

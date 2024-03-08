/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:16:47 by paugonca          #+#    #+#             */
/*   Updated: 2024/03/08 13:04:33 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool	is_operator(char c)
{
	std::string	ops = "+-*/";

	for (std::string::iterator i = ops.begin(); i != ops.end(); i++)
		if (c == *i)
			return (true);
	return (false);
}

void	print_err(std::string msg)
{
	std::cerr << "Error: " << msg << std::endl;
	exit(EXIT_FAILURE);
}

static double	calculate(double a, double b, char op)
{
	switch (op)
	{
		case '+':
			return (b + a);
		case '-':
			return (b - a);
		case '*':
			return (b * a);
		case '/':
			return (b / a);
	}
	return (0);
}

void	postfix(std::string in)
{
	double				a, b;
	std::stack<double>	stk;

	in.erase(std::remove(in.begin(), in.end(), ' '), in.end());
	for (std::string::iterator i = in.begin(); i != in.end(); i++)
	{
		if (!std::isdigit(*i) && !is_operator(*i))
			print_err("please input only digits and/or operators");
		else if (std::isdigit(*i))
		{
			a = *i - '0';
			stk.push(a);
		}
		else if (is_operator(*i))
		{
			if (stk.size() < 2)
				print_err("bad expression");
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(calculate(a, b, *i));
		}
	}
	if (stk.size() != 1)
		print_err("bad expression");

	std::cout << stk.top() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:16:47 by paugonca          #+#    #+#             */
/*   Updated: 2024/04/02 11:51:11 by paugonca         ###   ########.fr       */
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

int	print_err_ret(std::string msg)
{
	std::cout << "Error: " << msg << std::endl;
	return (EXIT_FAILURE);
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

int	postfix(std::string in)
{
	double				a, b;
	std::stack<double>	stk;

	in.erase(std::remove(in.begin(), in.end(), ' '), in.end());
	for (std::string::iterator i = in.begin(); i != in.end(); i++)
	{
		if (!std::isdigit(*i) && !is_operator(*i))
			return (print_err_ret("please input only digits and/or operators"));
		else if (std::isdigit(*i))
		{
			a = *i - '0';
			stk.push(a);
		}
		else if (is_operator(*i))
		{
			if (stk.size() < 2)
				return (print_err_ret("bad expression"));
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(calculate(a, b, *i));
		}
	}
	if (stk.size() != 1)
		return (print_err_ret("bad expression"));

	std::cout << stk.top() << std::endl;
	return (1);
}

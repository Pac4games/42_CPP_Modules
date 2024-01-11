/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:39:43 by paugonca          #+#    #+#             */
/*   Updated: 2024/01/11 15:56:58 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	std::cout << this->getNbAccounts();
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbAccounts++;
	return;
}

Account::~Account(void)
{
	return;
}

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	return;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits();
	Account::getNbWithdrawals();
}

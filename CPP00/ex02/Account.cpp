/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:56:10 by luyang            #+#    #+#             */
/*   Updated: 2024/03/13 16:38:46 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" <<_amount
				<< ";created" << std::endl;

}

Account::~Account(void)
{
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}



void	Account::_displayTimestamp(void)
{
	std::time_t	t = std::time(nullptr);
	std::tm*	now = std::localtime(&t);

	char	timestamp[20];
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", now);
	std::cout << "[" << std::flush;
	std::cout << timestamp << std::flush;
	std::cout << "] " <<std::flush;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp;
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals <<std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit << std::flush;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:" << std::flush;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:57:17 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/07 22:55:06 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )  { return (_nbAccounts);	}

int	Account::getTotalAmount( void ) { return (_totalAmount);	}

int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int	Account::getNbWithdrawals( void ) {	return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += initial_deposit;
}


Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

/*
strftime()????????? ???????????? time_t ???????????? ????????? ????????? ???????????? ???????????? ??????????????????.
[?????????_?????????] = %Y%m%d_%H%M%S
time ????????? ???????????? time_t??? ?????? ???????????? ?????? 32????????? 64?????? ????????????.
??? ?????? ????????? ?????? localtime ????????? ????????? ???????????? ?????? ????????? ????????????.
*/
void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_amount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount + withdrawal << ";";
	if (!checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		_amount += withdrawal;
		return (false);
	}
	_nbWithdrawals += 1;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount( void ) const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	char	buff[16];
	time_t	curtime = time(NULL);

	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&curtime));
	std::cout << "[" << buff << "]";
}

Account::Account(void){}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaek <kbaek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:57:17 by kbaek             #+#    #+#             */
/*   Updated: 2022/04/07 19:26:49 by kbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

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

/*
strftime()함수는 입력받은 time_t 구조체의 정보를 지정한 양식으로 문자열로 변환시켜준다.
[년월일_시분초] = %Y%m%d_%H%M%S
time 함수가 돌려주는 time_t의 값은 시스템에 따라 32비트나 64비트 정수이다.
이 값을 다음과 같이 localtime 함수를 이용해 사용하기 쉬운 형태로 변환한다.
*/
void Account::_displayTimestamp(void)
{
	char	buff[16];
	time_t	curtime = time(NULL);

	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&curtime));
	std::cout << "[" << buff << "]";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}
Account::Account(int initial_deposit) 
	:
	_accountIndex(Account::_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	Account::_totalAmount += initial_deposit;
}


Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

Account::Account(void){}
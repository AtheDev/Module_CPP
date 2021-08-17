/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:00:45 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/17 17:42:03 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit):	_accountIndex(Account::_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int		Account::getNbAccounts( void ){return Account::_nbAccounts;}

int		Account::getTotalAmount( void ) {return Account::_totalAmount;}

int		Account::getNbDeposits( void ) {return Account::_totalNbDeposits;}

int		Account::getNbWithdrawals( void ) {return Account::_totalNbWithdrawals;}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

int		Account::checkAmount(void) const {return this->_amount;}

bool	Account::makeWithdrawal(int withdrawals) {

	_displayTimestamp();
	if (withdrawals > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:" << withdrawals;
	this->_amount -= withdrawals;
	this->_nbWithdrawals++;
	std::cout << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
	Account::_totalAmount -= withdrawals;
	Account::_totalNbWithdrawals++;
	return (true);
}

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp(void) {

	char	buffer_time[18];

	std::time_t	time = std::time(0);
	std::strftime(buffer_time, 18, "[%Y%d%m_%H%M%S]", std::localtime(&time));
	std::cout << buffer_time;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

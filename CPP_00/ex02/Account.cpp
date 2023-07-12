/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:18:44 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 11:38:19 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//[19920104_091532] index:0;amount:42;created
Account::Account(int initial_dposit){
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_dposit;
	_totalAmount += initial_dposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE  << this->_amount << RESET << ";";
	std::cout << "created" << std::endl;
}

//[19920104_091532] index:0;amount:47;closed
Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "closed" <<std::endl;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ){
	std::time_t localTime = std::time(0);
	std::tm* ltm = std::localtime(&localTime);

	//[19920104_091532] YYYYMMDD_hhmmss
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;	//Year
	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;	//Month
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday << "_";	//Day
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;	//Hour
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;	//Minute
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;	//Second
	std::cout << "] ";
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 
void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accouts:" << BLUE << getNbAccounts() << RESET << ";";
	std::cout << "total:" << BLUE << getTotalAmount() << RESET << ";";
	std::cout << "deposits:" << BLUE << getNbDeposits() << RESET << ";";
	std::cout << "withdrawals:" << BLUE << getNbWithdrawals() << RESET << std::endl;
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "deposits:" << BLUE << this->_nbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
}

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1 
void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "deposit:" << BLUE << deposit << RESET << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	if (deposit > 0)
	{
		this->_nbDeposits += 1;
		_totalNbDeposits += 1;
	}
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "nb_deposits:" << BLUE << this->_nbDeposits << RESET << std::endl;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused 
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << this->_amount << RESET << ";";
	if (withdrawal > this->_amount){
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << BLUE << withdrawal << RESET << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "nb_withdrawal:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
	return true;
}
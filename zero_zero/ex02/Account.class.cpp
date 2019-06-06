/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:07:42 by tshata            #+#    #+#             */
/*   Updated: 2019/06/05 12:03:01 by tshata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

Account::Account(int initial_deposit)
{
	//Display the account like in the log
	//Set the values accordingly first
}

Account::~Account(void)
{
}

void	Account::_displayTimestamp( void )
{
	//intialize the time and a pointer to a struct

	return ;
}

void	Account::displayAccountsInfos(void)
{
}

void		Account::displayStatus(void) const
{
	}

void		Account::makeDeposit(int deposit)
{
	}

bool		Account::makeWithdrawal(int withdrawal)
{
		
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:52 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:38:19 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::~Account()
{
	return ;
}

Account::Account() : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	return ;
}


Account::Account( int initial_deposit )
{
	
}
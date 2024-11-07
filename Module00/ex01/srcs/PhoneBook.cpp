/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:44:26 by saandria          #+#    #+#             */
/*   Updated: 2024/11/07 16:15:20 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

 int	PhoneBook::_count = 0;

PhoneBook::PhoneBook() : _index(0)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

Contact	PhoneBook::getContact(int index) const
{	
	return (this->_contact[index]);
}

int	PhoneBook::getCount() const
{
	return (this->_count);
}

void PhoneBook::setContact(Contact contact)
{
	this->_contact[this->_index] = contact;
	if (_count < 8)
		_count = _count + 1;
	else
		_count = _count;
	this->_index = (this->_index + 1) % 8;
	return ;
}

int PhoneBook::getIndex() const
{
	return ((this->_index));
}

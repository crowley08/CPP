/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:38:48 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:35:00 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

Contact::Contact() : _first_name(""), _last_name(""), _nickname(""), _phone(""), _secret(""), _index(0)
{

	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setIndex( int index )
{
	this->_index = index;
}

void	Contact::setFirstName( std::string firstName )
{
	this->_first_name = firstName;
}

void    Contact::setLastName( std::string lastName )
{
	this->_last_name = lastName;
}

void    Contact::setNickName( std::string nickname )
{
	this->_nickname = nickname;
}


void    Contact::setPhoneNumber( std::string phoneNumber )
{
    this->_phone = phoneNumber;
}

void	Contact::setSecret( std::string secret )
{
	this->_secret = secret;
}

std::string    Contact::getFirstName() const
{	
	return (this->_first_name);
}


std::string    Contact::getLastName() const
{
	return (this->_last_name);
}

std::string    Contact::getNickName() const
{
	return (this->_nickname);
}

std::string    Contact::getPhoneNumber() const
{
	return (this->_phone);
}

std::string    Contact::getSecret() const
{
    return (this->_secret);
}

int Contact::getIndex() const
{
	return ((this->_index));
}

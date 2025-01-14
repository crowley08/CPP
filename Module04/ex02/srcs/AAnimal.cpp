/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:40:11 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:00:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
	std::cout << "AAnimal copy constructor" << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal&				AAnimal::operator=( AAnimal const& rhs )
{
	if ( this != &rhs )
	{
		this->setType( rhs.getType() );
	}
	return *this;
}

void	AAnimal::setType( std::string type )
{
	this->_type = type;
}

std::string	AAnimal::getType() const
{
	return ( this->_type );
}
